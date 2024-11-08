/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:19:11 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/08 23:20:31 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iterator>

// Exception personnalisée pour l'absence d'élément trouvé
class NotFoundException : public std::exception {
public:
    const char* what() const noexcept override; // ?????
};

// Déclaration de la fonction template
template <typename T>
typename T::iterator easyfind(T& container, int nb);

// Inclusion de l'implémentation de la fonction template
#include "easyfind.tpp"

#endif
