#include "Intern.hpp"

Form* Intern::makeShrubForm(std::string target)
{
	std::cout << "Intern: making ShrubForm" << std::endl;
	return new ShrubberyCreationForm(target);
}
Form* Intern::makeRobotoForm(std::string target)
{
	std::cout << "Intern: making RobotoForm" << std::endl;
	return new RobotomyRequestForm(target);

}
Form* Intern::makePardonForm(std::string target)
{
	std::cout << "Intern: making PardonForm" << std::endl;
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string type, std::string target)
{
	int i;
	std::string levels[4] = {"shrubbery creation",
							 "robotomy request",
							 "presidential pardon",
							 "Unknown form"};

	i = 0;
	while (levels[i] != type && i < 3)
		i++;
	while (i < 3)
	{
		Form* (Intern::*funcs[3])(std::string);
		funcs[0] = &Intern::makeShrubForm;
		funcs[1] = &Intern::makeRobotoForm;
		funcs[2] = &Intern::makePardonForm;
		return (this->*funcs[i])(target);
	}
	throw UnknownFormException();
}

Intern::Intern()
{}

Intern::~Intern()
{
}


const char *Intern::UnknownFormException::what() const throw()
{
	return ("\x1B[35mexception: Unknown form =(\x1B[0m");

}
