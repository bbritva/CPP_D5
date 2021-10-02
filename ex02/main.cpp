#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
//
//void try_incdec_bur(int grade, char inc)
//{
//	std::cout << BEGIN;
//	if (inc)
//	{
//		try
//		{
//			Bureaucrat dima(BURO_NAME, grade);
//			std::cout << dima;
//			try
//			{
//				std::cout << INC_MSG << grade << ".\n";
//				dima.incGrade();
//				std::cout << dima;
//			}
//			catch (std::exception &e)
//			{
//				std::cerr << e.what() << "\n";
//			}
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << "\n";
//		}
//	}
//	else
//	{
//		try
//		{
//			Bureaucrat dima(BURO_NAME, grade);
//			std::cout << dima;
//			try
//			{
//				std::cout << DEC_MSG << grade << ".\n";
//				dima.decGrade();
//				std::cout << dima;
//			}
//			catch (std::exception &e)
//			{
//				std::cerr << e.what() << "\n";
//			}
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << "\n";
//		}
//	}
//	std::cout << END;
//}
//
//void try_create_bur(int grade)
//{
//	std::cout << BEGIN;
//	try
//	{
//		std::cout << CREATE_MSG << grade << ".\n";
//		Bureaucrat dima(BURO_NAME, grade);
//		std::cout << dima;
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what() << "\n";
//	}
//	std::cout << END;
//}
//
//void try_create_form(int grade)
//{
//	std::cout << BEGIN;
//	try
//	{
//		std::cout << F_CREATE_MSG << grade << ".\n";
//		Form f("blank", grade, 1);
//		std::cout << f;
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what() << "\n";
//	}
//	std::cout << END;
//}
//
//void try_sign_form(int gradeBur, int gradeForm)
//{
//	std::cout << BEGIN;
//	std::cout << SIGN_MSG << ".\n";
//	Bureaucrat vova("vova", gradeBur);
//	std::cout << vova;
//	Form a("blank", gradeForm, 56);
//	std::cout << a;
//	vova.signForm(a);
//	std::cout << a;
//	std::cout << END;
//}

void ShrubberyFormTest(Bureaucrat *bureaucrats[150])
{
	ShrubberyCreationForm scf("home");
	std::cout << scf;
	try
	{
		std::cout << "\x1B[36mtry sign form by 147 grade:\n\x1B[0m";
		bureaucrats[147]->signForm(scf);
		if (scf.isSigned())
			std::cout << "SUCCESS!\n";
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
			std::cout << "SUCCESS!\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry sign form by 135 grade:\n\x1B[0m";
		bureaucrats[135]->signForm(scf);
		std::cout << "SUCCESS!\n";
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
		std::cout << "SUCCESS!\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 135 grade:\n\x1B[0m";
		scf.execute(*bureaucrats[135]);
		std::cout << "SUCCESS!\n";
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
			std::cout << "SUCCESS!\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute unsigned form:\n\x1B[0m";
		rrf.execute(*bureaucrats[135]);
		if (rrf.isSigned())
			std::cout << "SUCCESS!\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry sign form by 135 grade:\n\x1B[0m";
		bureaucrats[135]->signForm(rrf);
		std::cout << "SUCCESS!\n";
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
		std::cout << "SUCCESS!\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		std::cout << "\x1B[36mtry execute signed form by 135 grade:\n\x1B[0m";
		rrf.execute(*bureaucrats[135]);
		std::cout << "SUCCESS!\n";
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
//	RobotomyFormTest(bureaucrats);
//	PresidentialPardonFormTest(bureaucrats);

	for (int i = 0; i < 150; ++i)
		delete bureaucrats[i];
	return 0;
}
