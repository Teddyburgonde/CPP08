/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:25:18 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/10 10:19:37 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test addNumber();

#include "Span.hpp"

int	main()
{
	// /* Test function addNumber() and Span is full*/
	// {
	// 	Span sp(3);
	// 	try 
	// 	{
	// 		sp.addNumber(4);
	// 		sp.addNumber(2);
	// 		sp.addNumber(5);
	// 		sp.addNumber(8);		
	// 	} 
	// 	catch (std::exception &e) 
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }

	// /* Test function shorttestSpan() */
	// {
	// 	Span sp(5);
	// 	try 
	// 	{
	// 		int valueSmall;

	// 		valueSmall = 0;
	// 		sp.addNumber(10);
	// 		sp.addNumber(7);
	// 		sp.addNumber(21);
	// 		sp.addNumber(12);
	// 		sp.addNumber(3);
	// 		valueSmall = sp.shortestSpan();
	// 		std::cout << valueSmall << std::endl;
	// 	} 
	// 	catch (std::exception &e) 
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	
	// /* Test function shorttestSpan() exception because one element in container */
	// {
	// 		Span sp(2);
	// 		try 
	// 		{
	// 			int result = 0;
	// 			sp.addNumber(5);
	// 			result = sp.shortestSpan();
	// 			std::cout << result << std::endl;
	// 		} 
	// 		catch (std::exception &e) 
	// 		{
	// 			std::cerr << e.what() << std::endl;
	// 		}
	// }



	// /* Test function longestSpan() */
	// {
	// 	Span sp(5);
	// 	try 
	// 	{
	// 		int valueHigh;

	// 		valueHigh = 0;
	// 		sp.addNumber(3);
	// 		sp.addNumber(7);
	// 		sp.addNumber(10);
	// 		sp.addNumber(20);	
	// 		sp.addNumber(12);
	// 		valueHigh = sp.longestSpan();
	// 		std::cout << valueHigh << std::endl;
	// 	} 
	// 	catch (std::exception &e) 
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
}