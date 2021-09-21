#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Vova"), _grade(150)
{}

Bureaucrat::Bureaucrat(Bureaucrat &other):	_name(other._name),
											_grade(other._grade)
{}

Bureaucrat::Bureaucrat(std::string name, int grade):	_name(name),
														_grade(grade)
{}

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
}

void Bureaucrat::decGrade()
{
	this->_grade++;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &buddy)
{
	stream << buddy.getName() << " has " << buddy.getGrade() << " grade.\n";
	return stream;
}

