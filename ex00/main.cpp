/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:56:16 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 18:59:13 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	int tab[] = { 5, 4, 78};
	
	try 
	{
		typename T::iterator easyfind(tab, 5);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}