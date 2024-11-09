/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:48:11 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 23:31:01 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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

// void Span::addNumber(int n)
