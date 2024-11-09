/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:48:11 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 20:54:20 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(int n) : _n(n)
{
	
}

Span::Span( Span const & cpy)
{
	*this = cpy;
}

Span::~Span(){}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
	}
	return (*this);
}
