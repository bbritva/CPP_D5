#include "Bureaucrat.hpp"
#include "Form.hpp"
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

int main()
{

	Bureaucrat vova("vova", 50);
	std::cout << vova;
//	try_create_bur(55);
//	try_create_bur(-55);
//	try_create_bur(155);
//	
//	try_incdec_bur(150, 1);
//	try_incdec_bur(150, 0);
//	try_incdec_bur(1, 1);
//	try_incdec_bur(1, 0);
//
//	try_create_form(55);
//	try_create_form(-55);
//	try_create_form(155);
//
//	try_sign_form(50, 70);
//	try_sign_form(70, 50);

	return 0;
}
