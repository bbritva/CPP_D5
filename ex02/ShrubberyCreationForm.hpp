/**
At least:
- default constructor
- copy constructor
- assignation operator overload
- destructor.
 */

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	const std::string	_target;
	ShrubberyCreationForm();

public:
	const std::string &getTarget() const;

public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm &other);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm();
	
	void execute(Bureaucrat const & executor);
	
};

#endif //ShrubberyCreationForm_HPP
