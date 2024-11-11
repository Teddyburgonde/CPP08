/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:25:18 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/11 10:31:54 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "======== Test function addNumber() and Span is full ========" << std::endl;
	std::cout << std::endl;
	{
		Span sp(3);
		try 
		{
			sp.addNumber(4);
			sp.addNumber(2);
			sp.addNumber(5);
			sp.addNumber(8);		
		} 
		catch (std::exception &e) 
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "========  Test function shorttestSpan() ======== " << std::endl;
	std::cout << std::endl;
	{
		Span sp(5);
		try 
		{
			int valueSmall;

			valueSmall = 0;
			sp.addNumber(10);
			sp.addNumber(7);
			sp.addNumber(21);
			sp.addNumber(12);
			sp.addNumber(3);
			valueSmall = sp.shortestSpan();
			std::cout << valueSmall << std::endl;
		} 
		catch (std::exception &e) 
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "======== Test function shorttestSpan() exception because one element in container ======== " << std::endl;
	std::cout << std::endl;
	{
			Span sp(2);
			try 
			{
				int result = 0;
				sp.addNumber(5);
				result = sp.shortestSpan();
				std::cout << result << std::endl;
			} 
			catch (std::exception &e) 
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl;
	std::cout << "======== Test function longestSpan() ======== " << std::endl;
	std::cout << std::endl;
	{
		Span sp(5);
		try 
		{
			int valueHigh;

			valueHigh = 0;
			sp.addNumber(3);
			sp.addNumber(7);
			sp.addNumber(10);
			sp.addNumber(20);	
			sp.addNumber(12);
			valueHigh = sp.longestSpan();
			std::cout << valueHigh << std::endl;
		} 
		catch (std::exception &e) 
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "======== Test addRange() ======== " << std::endl;
	std::cout << std::endl;
	{
		Span sp(5);
		try
		{
			std::vector<int> values;
			values.push_back(1);
			values.push_back(2);
			values.push_back(3);
			values.push_back(4);
			values.push_back(5);			
			sp.addRange(values.begin(), values.end());
			std::cout << "Elements added successfully!" << std::endl;

			std::cout << "Span contents: ";
			sp.printNumbers();
        	std::cout << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

}