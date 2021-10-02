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

#define F_CREATE_MSG "Try to create Form with grade "

class Bureaucrat;

class Form
{
protected:
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExec;
	bool 				_isSigned;
	
public:
	virtual const std::string &getName() const;
	virtual int getGradeToSign() const;
	virtual int getGradeToExec() const;
	virtual bool isSigned() const;
	
	Form();
	Form(const std::string &name, int gradeToSign = 0,
		 int gradeToExec = 0);
	Form(Form &other);
	Form & operator=(Form const &other);
	~Form();
	virtual void execute(Bureaucrat const & executor) const = 0;
	
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

	class UnsignedFormException : public std::exception
		{
		public:
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &stream, const Form &form);

#endif //Form_HPP
