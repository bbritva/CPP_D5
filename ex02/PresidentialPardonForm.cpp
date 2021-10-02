#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form
("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form
("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) :
			Form("PresidentialPardonForm", 25, 5),
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
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox.\n";
}
