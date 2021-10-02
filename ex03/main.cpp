#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void ShrubberyFormTest(Bureaucrat *bureaucrats[150])
{
	ShrubberyCreationForm scf("home");
	std::cout << scf;
	try
	{
		std::cout << "\x1B[36mtry sign form by 147 grade:\n\x1B[0m";
		bureaucrats[147]->signForm(scf);
		if (scf.isSigned())
			std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute unsigned form:\n\x1B[0m";
		scf.execute(*bureaucrats[135]);
		if (scf.isSigned())
			std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry sign form by 135 grade:\n\x1B[0m";
		bureaucrats[135]->signForm(scf);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << scf;
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 145 grade:\n\x1B[0m";
		scf.execute(*bureaucrats[145]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 135 grade:\n\x1B[0m";
		scf.execute(*bureaucrats[135]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
}

void RobotomyRequestFormTest(Bureaucrat *bureaucrats[150])
{
	RobotomyRequestForm rrf("vacuum cleaner");
	std::cout << rrf;
	try
	{
		std::cout << "\x1B[36mtry sign form by 147 grade:\n\x1B[0m";
		bureaucrats[147]->signForm(rrf);
		if (rrf.isSigned())
			std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute unsigned form:\n\x1B[0m";
		rrf.execute(*bureaucrats[40]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry sign form by 70 grade:\n\x1B[0m";
		bureaucrats[70]->signForm(rrf);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << rrf;
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 145 grade:\n\x1B[0m";
		rrf.execute(*bureaucrats[145]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 40 grade:\n\x1B[0m";
		rrf.execute(*bureaucrats[40]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
}


void PresidentialPardonFormTest(Bureaucrat *bureaucrats[150])
{
	PresidentialPardonForm ppf("Borodach");
	std::cout << ppf;
	try
	{
		std::cout << "\x1B[36mtry sign form by 147 grade:\n\x1B[0m";
		bureaucrats[147]->signForm(ppf);
		if (ppf.isSigned())
			std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute unsigned form:\n\x1B[0m";
		ppf.execute(*bureaucrats[3]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry sign form by 20 grade:\n\x1B[0m";
		bureaucrats[20]->signForm(ppf);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << ppf;
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 145 grade:\n\x1B[0m";
		ppf.execute(*bureaucrats[145]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 3 grade:\n\x1B[0m";
		ppf.execute(*bureaucrats[3]);
		std::cout << "\033[92mSUCCESS!\n\x1B[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
}

int main()
{

	Bureaucrat *bureaucrats[150];
	for (int i = 0; i < 150; ++i)
		bureaucrats[i] = new Bureaucrat("bureaucrat " + std::to_string(i + 1),
										i + 1);
	ShrubberyFormTest(bureaucrats);
	RobotomyRequestFormTest(bureaucrats);
	PresidentialPardonFormTest(bureaucrats);

	ShrubberyCreationForm scf("buddy_home");
	bureaucrats[1]->signForm(scf);
	std::cout << "\x1B[36mtry execute signed form by 149 grade:\n\x1B[0m";
	bureaucrats[149]->executeForm(scf);
	std::cout << "\x1B[36mtry execute signed form by 130 grade:\n\x1B[0m";
	bureaucrats[130]->executeForm(scf);


	for (int i = 0; i < 150; ++i)
		delete bureaucrats[i];
	try
	{
		Intern  someRandomIntern;
		Form*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *rrf;
		delete rrf;
		rrf = someRandomIntern.makeForm("bla bla form", "Bender");
		std::cout << *rrf;
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	return 0;
}
