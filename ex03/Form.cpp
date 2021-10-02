#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExec) :
							_name(name),
							_gradeToSign(gradeToSign),
							_gradeToExec(gradeToExec),
							_isSigned(false)
{
	if (gradeToExec > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToExec < 1 || gradeToSign < 1)
		throw GradeTooHighException();
}

Form::~Form(){}

Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return (*this);
	this->_isSigned = other.isSigned();
	return (*this);
}

const std::string& Form::getName() const
{
	return _name;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExec() const
{
	return _gradeToExec;
}

bool Form::isSigned() const
{
	return _isSigned;
}

void Form::beSigned(const Bureaucrat &buddy)
{
	if (buddy.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
	std::cout << "Form \"" << _name << "\" has been signed.\n";
}

std::ostream& operator<<(std::ostream &stream, const Form &form)
{
	stream << "..........................\n";
	stream << "This is a \"" << form.getName() << "\" form.\n" <<
	"Grade to sign it = " << form.getGradeToSign() << ".\n" <<
	"Grade to exec it = " << form.getGradeToExec() << ".\n";
	if (form.isSigned())
		stream << "It is SIGNED.\n";
	else
		stream << "It is NOT SIGNED.\n";
	stream << "..........................\n";
	return stream;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("\x1B[35mexception: Grade too high =(\x1B[0m");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("\x1B[35mexception: Grade too low =(\x1B[0m");
}

const char *Form::UnsignedFormException::what() const throw()
{
	return ("\x1B[35mexception: Form unsigned =(\x1B[0m");
}
