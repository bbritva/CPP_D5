#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	int grade;
	
	grade = 75;
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
	
	Form a("blank", 55, 56);
	std::cout << a;
	vova.signForm(a);
	return 0;
}
