#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	int grade;
	
	grade = 50;
	Bureaucrat vova("vova", grade);
	std::cout << vova;
	try
	{
		grade = 55;
		std::cout << CREATE_MSG << grade << ".\n";
		Bureaucrat dima(BURO_NAME, grade);
		std::cout << dima;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		grade = -55;
		std::cout << CREATE_MSG << grade << ".\n";
		Bureaucrat dima(BURO_NAME, grade);
		std::cout << dima;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		grade = 155;
		std::cout << CREATE_MSG << grade << ".\n";
		Bureaucrat dima(BURO_NAME, grade);
		std::cout << dima;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		grade = 155;
		std::cout << F_CREATE_MSG << grade << ".\n";
		Form f("blank", grade, 1);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	try
	{
		grade = 55;
		std::cout << F_CREATE_MSG << grade << ".\n";
		Form f("blank", grade, 1);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	
	Form a("blank", 70, 56);
	std::cout << a;
	vova.signForm(a);
	std::cout << a;	
	Form b("blank", 30, 56);
	std::cout << b;
	vova.signForm(b);
	std::cout << b;
	return 0;
}
