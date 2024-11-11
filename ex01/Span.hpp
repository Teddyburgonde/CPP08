/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:38:43 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/11 10:32:40 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <iterator>

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
		class SpanFullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class SpanShortException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		std::vector<int> _numbers;
		size_t _maxSize;
	public :
		void printNumbers() const;
};


template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end)
{
    int rangeSize = std::distance(begin, end);
    if (rangeSize == 0) 
        return;

    if (_numbers.size() == _maxSize)
        throw Span::SpanFullException();

    int remainingCapacity = _maxSize - _numbers.size();
    if (rangeSize > remainingCapacity)
        throw Span::SpanFullException();

    _numbers.insert(_numbers.end(), begin, end);
}

#endif 