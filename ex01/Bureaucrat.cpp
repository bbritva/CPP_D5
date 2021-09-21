#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Vova"), _grade(150)
{}

Bureaucrat::Bureaucrat(Bureaucrat &other):	_name(other._name),
											_grade(other._grade)
{}

Bureaucrat::Bureaucrat(std::string name, int grade):	_name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	this->_grade = other._grade;
	return (*this);
}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

const int& Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incGrade()
{
	this->_grade--;
	if (!_grade)
	{
		_grade++;
		throw GradeTooHighException();
	}
}

void Bureaucrat::decGrade()
{
	this->_grade++;
	if (_grade > 150)
	{
		_grade--;
		throw GradeTooLowException();
	}
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Form successfully signed\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &buddy)
{
	stream << buddy.getName() << " has " << buddy.getGrade() << " grade.\n";
	return stream;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("exception: Grade too high =(");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("exception: Grade too low =(");
}
