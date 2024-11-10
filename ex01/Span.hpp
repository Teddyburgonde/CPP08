/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:38:43 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/10 09:55:54 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
	public: /* Canonical form */
		Span();
		Span(size_t n);
		Span(const Span &cpy);
		~Span();
		Span & operator=(const Span &rhs);
	
	public : /* Method */
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		template <typename Iterator>
    	void addRange(Iterator begin, Iterator end);
		

	public : /* Exception */
		class SpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class SpanFullException : public SpanException
		{
			public:
				virtual const char *what() const throw();
		};
		class SpanShortException : public SpanException
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		std::vector<int> _numbers; // contenur pour stocker les entiers 
		size_t _maxSize; // Capacité maximale du Span 
	
	public: 
		int getN() const;
		int getSize() const;
};

#endif 