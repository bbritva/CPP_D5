#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form
("PresidentialPardonForm", 72, 45)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form
("PresidentialPardonForm", 72, 45), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) :
			Form("PresidentialPardonForm", 72, 45),
			_target(other._target)
{
	this->_isSigned = other.isSigned();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this == &other)
		return (*this);
	*this = other;
	return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
	if (!isSigned())
		throw UnsignedFormException();
	srand(static_cast<unsigned int>(time(nullptr)));
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully.\n";
	else
		std::cout << getTarget() << " robotomize FAILED.\n";

}
