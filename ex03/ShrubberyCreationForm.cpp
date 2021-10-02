#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form
("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form
("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) :
			Form("ShrubberyCreationForm", 145, 137),
			_target(other._target)
{
	this->_isSigned = other.isSigned();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return (*this);
	*this = other;
	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
	if (!isSigned())
		throw UnsignedFormException();
	std::ofstream out;
	std::string ttt = "_shrubbery";
	try
	{
		out.open(ttt.insert(0, this->getTarget()));
		out << "             _{\\ _{\\{\\/}/}/}__\n"
			   "            {/{/\\}{/{/\\}(\\}{/\\} _\n"
			   "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
			   "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
			   "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
			   "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
			   "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
			   "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
			   "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
			   "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
			   "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
			   "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
			   "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
			   "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
			   "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
			   "           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
			   "            {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
			   "             {){/ {\\/}{\\/} \\}\\}\n"
			   "             (_)  \\.-'.-/\n"
			   "         __...--- |'-.-'| --...__\n"
			   "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
			   "-\"    ' .  . '    |.'-._| '  . .  '   jro\n"
			   ".  '-  '    .--'  | '-.'|    .  '  . '\n"
			   "         ' ..     |'-_.-|\n"
			   " .  '  .       _.-|-._ -|-._  .  '  .\n"
			   "             .'   |'- .-|   '.\n"
			   " ..-'   ' .  '.   `-._.-´   .'  '  - .\n"
			   "  .-' '        '-._______.-'     '  .\n"
			   "       .      ~,\n"
			   "   .       .   |\\   .    ' '-.\n";
		out.close();
	}
	catch (std::exception &e) {
		std::cout << "Open file error: " << ttt << "."  << e.what() << 
		std::endl;
	}
}
