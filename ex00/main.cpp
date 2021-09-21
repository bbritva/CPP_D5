#include "Bureaucrat.hpp"

int main()
{
	int grade;
	
	grade = 56;
	Bureaucrat vova("vova", grade);
	std::cout << vova;
	try
	{
		grade = 55;
		std::cout << CREATE_MSG << grade << ".\n";
		Bureaucrat dima("dima", grade);
		std::cout << dima;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
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
		std::cout << e.what() << "\n";
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
		std::cout << e.what() << "\n";
	}
	return 0;
}
