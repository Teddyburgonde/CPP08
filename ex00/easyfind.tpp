/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:21:00 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/09 17:08:06 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int nb)
{
	typename T::iterator first = container.begin();
	typename T::iterator last = container.last();
	typename T::iterator it = find(first, last, nb);

	if (it != container.last())
		return (it);
	else
		throw NotFoundException();
}