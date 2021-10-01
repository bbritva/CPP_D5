/**
At least:
- default constructor
- copy constructor
- assignation operator overload
- destructor.
 */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string	_target;
	PresidentialPardonForm();

public:
	const std::string &getTarget() const;

public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm &other);
	PresidentialPardonForm & operator=(PresidentialPardonForm const &other);
	~PresidentialPardonForm();
	
	void execute(Bureaucrat const & executor);
	
};

#endif //PresidentialPardonForm_HPP
