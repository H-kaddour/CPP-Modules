/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:38:12 by hkaddour          #+#    #+#             */
/*   Updated: 2023/01/25 16:20:03 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Default constructer called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int sign, int exec) \
		: AForm(name, sign, exec)
{
	std::cout << "ShrubberyCreationForm Init constructer called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & obj)
{
	std::cout << "ShrubberyCreationForm copy constructer called!" << std::endl;
	*this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj)
{
	std::cout << "ShrubberyCreationForm copy assignment." << std::endl;
	AForm::operator=(obj);
	return (*this);
}

void	ShrubberyCreationForm::tree(void) const
{
	std::ofstream tree;

	tree.open(this->getName() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	tree <<	"    oxoxoo    ooxoo " << std::endl;
	tree << " ooxoxo oo  oxoxooo " << std::endl;
	tree << "oooo xxoxoo ooo ooox " << std::endl;
	tree << "oxo o oxoxo  xoxxoxo " << std::endl;
	tree << " oxo xooxoooo o ooo " << std::endl;
	tree << "   ooo\\oo\\  /o/o " << std::endl;
	tree << "       \\  \\/ / " << std::endl;
	tree << "        |   / " << std::endl;
	tree << "        |  | " << std::endl;
	tree << "        | O| " << std::endl;
	tree << "        |  | " << std::endl;
	tree << "        |  | " << std::endl;
	tree << " ______/____\\____ " << std::endl;
	tree.close();
}

int	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->checkExec(executor))
			throw (GradeTooLowException());
		if (this->getGradeSign() != 145 || this->getGradeExec() != 137)
			return (0);
		this->tree();
		return (1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Default Destructer called!" << std::endl;
}
