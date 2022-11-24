/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:24:02 by hkaddour          #+#    #+#             */
/*   Updated: 2022/11/23 15:23:33 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

# include <ios>
# include <iostream>
# include <fstream>

void	error(std::string msg);
std::string	file(std::string file);
void	write_in_file(char **av);
