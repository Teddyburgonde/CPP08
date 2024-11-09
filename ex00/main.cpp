/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:56:16 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 20:21:29 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int	main()
{
	/* Test element found */
	std::cout << "Test for vector" << std::endl;
	{
		std::vector<int>array;
	
		array.push_back(5);
		array.push_back(2);
		array.push_back(77);
		try 
		{
			std::vector<int>::iterator it = easyfind(array, 2);
			std::cout << "Element found: " << *it << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	/* Test element not found */
	std::cout << "Test for list" << std::endl;
	{
		std::list<int>array;
	
		array.push_back(12);
		array.push_back(3);
		array.push_back(77);
		try 
		{
			std::list<int>::iterator it = easyfind(array, 2);
			std::cout << "Element found: " << *it << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	/* Test element found */
	std::cout << "Test for deque" << std::endl;
	{
		std::deque<int>array;
	
		array.push_back(55);
		array.push_back(57);
		array.push_back(12);
		try 
		{
			std::deque<int>::iterator it = easyfind(array, 57);
			std::cout << "Element found: " << *it << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	
}