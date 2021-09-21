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

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &other);
	Bureaucrat & operator=(Bureaucrat const &other);

	virtual ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &buddy);

#endif //Bureaucrat_HPP
