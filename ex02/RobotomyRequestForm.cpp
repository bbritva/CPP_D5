#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form
("RobotomyRequestForm", 25, 5)
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form
("RobotomyRequestForm", 25, 5), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) :
			Form("RobotomyRequestForm", 25, 5),
			_target(other._target)
{
	this->_isSigned = other.isSigned();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return (*this);
	*this = other;
	return (*this);
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
	if (!isSigned())
		throw UnsignedFormException();
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox.\n";


}
