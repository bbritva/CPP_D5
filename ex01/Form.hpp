/**
At least:
- default constructor
- copy constructor
- assignation operator overload
- destructor.
 */

#ifndef Form_HPP
#define Form_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

#define CREATE_MSG "Try to create Bureaucrat with grade "
#define F_CREATE_MSG "Try to create Form with grade "
#define BURO_NAME "Dima"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExec;
	bool 				_isSigned;
	Form();
	
public:
	const std::string &getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	bool isSigned() const;
	
	Form(const std::string &name, int gradeToSign = 0,
		 int gradeToExec = 0);
	Form(Form &other);
	Form & operator=(Form const &other);
	~Form();
	
	void beSigned(Bureaucrat const &buddy);
	
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
};

std::ostream& operator<<(std::ostream &stream, const Form &form);

#endif //Form_HPP
