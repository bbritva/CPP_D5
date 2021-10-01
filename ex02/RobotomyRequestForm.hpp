/**
At least:
- default constructor
- copy constructor
- assignation operator overload
- destructor.
 */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string	_target;
	RobotomyRequestForm();

public:
	const std::string &getTarget() const;

	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm &other);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &other);
	~RobotomyRequestForm();
	
	void execute(Bureaucrat const & executor);
	
};

#endif //RobotomyRequestForm_HPP
