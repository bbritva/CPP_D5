//
// Created by Gregorio Velva on 8/29/21.
//

#ifndef Intern_HPP
#define Intern_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
	Form* makeShrubForm(std::string target);
	Form* makeRobotoForm(std::string target);
	Form* makePardonForm(std::string target);
public:
	Intern();
	~Intern();
	Form *makeForm(std::string type, std::string target);
	
	class UnknownFormException : public std::exception
			{
			public:
				const char* what() const throw();
			};
};

#endif //Intern_HPP
