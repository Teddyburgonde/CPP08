/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:19:11 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/09 17:10:17 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iterator>


/* Exception class for element not found */

class NotFoundException : public std::exception 
{
    public:
        const char* what() const throw();
};

/* Method template */
template <typename T>
typename T::iterator easyfind(T& container, int nb);

#include "easyfind.tpp"

#endif
