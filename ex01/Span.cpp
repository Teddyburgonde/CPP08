/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:48:11 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/10 18:53:04 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

Span::Span(){}

Span::Span(size_t n) : _maxSize(n){}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span::~Span(){}

Span & Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_numbers = rhs._numbers;
		this->_maxSize = rhs._maxSize;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_numbers.size() == _maxSize)
		throw SpanFullException();
	_numbers.push_back(n);
}

int Span::shortestSpan()
{
	int minDifference;
	int tmp;

	minDifference = INT_MAX;
	tmp = 0;
	if (_numbers.size() < 2)
		throw SpanShortException();
	std::sort(_numbers.begin(), _numbers.end());
	for (size_t i = 0; i < _numbers.size() - 1; i++)
	{
		tmp = _numbers[i + 1] - _numbers[i];
		if (tmp < minDifference)
			minDifference = tmp;
	} 
	return (minDifference);
}

int Span::longestSpan()
{
	int maxDifference;
	int tmp;

	maxDifference = 0;
	tmp = 0;
	if (_numbers.size() < 2)
		throw SpanShortException();
	std::sort(_numbers.begin(), _numbers.end());
	maxDifference = _numbers.back() - _numbers.front();
	return (maxDifference);
}

template <typename Iterator>
void addRange(Iterator begin, Iterator end)
{
		
}

const char* Span::SpanFullException::what() const throw()
{
    return "Span is full. Max capacity reached.";
}

const char* Span::SpanShortException::what() const throw()
{
	return "There are less than two elements in the container.";
}

const char* Span::SpanException::what() const throw() // ???
{
	return "//";
}

