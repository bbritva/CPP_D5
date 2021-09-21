/**
At least:
- default constructor
- copy constructor
- assignation operator overload
- destructor.
 */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <string>
#include <iostream>

#define CREATE_MSG "Try to create Bureaucrat with grade "
#define BURO_NAME "Dima"

class Bureaucrat
{
protected:
	const std::string	_name;
	int					_grade;
	Bureaucrat();
	
public:
	const std::string &getName() const;
	const int &getGrade() const;
	void incGrade();
	void decGrade();
	
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &other);
	Bureaucrat & operator=(Bureaucrat const &other);
	~Bureaucrat();
};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &buddy);

#endif //Bureaucrat_HPP
