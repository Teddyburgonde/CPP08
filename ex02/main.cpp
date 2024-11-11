/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:36:07 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/11 21:05:22 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
int	main()
{
	std::cout << std::endl;
	std::cout <<"====== With deque container ========" << std::endl;
	{
		MutantStack<int> mstack;
		MutantStack<int>::iterator it;

		mstack.push(21);
		mstack.push(22);
		mstack.push(23);
		mstack.push(24);
		mstack.push(25);
		mstack.push(26);
		// mstack[0]; you cannot use an index
		
		
		for (it = mstack.begin(); it != mstack.end(); ++it) {
	        std::cout << *it << std::endl; 
		}
	}

	std::cout << std::endl;

	std::cout <<"====== With deque container ========" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) 
		{
	    	std::cout << *it << std::endl;
			++it; 
		}
		std::stack<int> s(mstack); 
	}
	std::cout << std::endl;

	std::cout <<"====== With list container ========" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3); mstack.push_back(5); mstack.push_back(737); //[...] mstack.push(0);
		std::list<int>::iterator it = mstack.begin(); std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) 
		{
		    std::cout << *it << std::endl;
			++it; 
		}
		std::list<int> s(mstack);
	}
	std::cout << std::endl;
	return 0;
}
