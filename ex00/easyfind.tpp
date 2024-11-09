/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:21:42 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 20:21:44 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int nb)
{
	typename T::iterator first = container.begin();
	typename T::iterator last = container.end();
	typename T::iterator it = std::find(first, last, nb);

	if (it != container.end())
		return (it);
	else
		throw NotFoundException();
}

const char* NotFoundException::what() const throw()
{
    return "Element not found";
}