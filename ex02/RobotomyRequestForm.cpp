#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form
("RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form
("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) :
			Form("RobotomyRequestForm", 72, 45),
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

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
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
