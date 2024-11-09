/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:38:43 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 20:53:27 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>

class Span
{
	public: /* Canonical form */
		Span();
		Span(int n);
		Span( Span const & cpy);
		~Span();
		Span & operator=(Span const & rhs);
	
	public : /* Method */
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

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
		class SpanLongException : public SpanException
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		int _n;
		int _size;
		//int *_array;
		//int _index;
	
	public: 
		int getN() const;
		int getSize() const;
		//int* getArray() const;
		//int getIndex() const;

};









#endif 