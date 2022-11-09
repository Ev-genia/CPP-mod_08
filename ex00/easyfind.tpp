/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:56:29 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/10 00:22:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef EASYFIND_HPP

template <typename T>
typename T::iterator	easyfind(T t, int nbr)
{
	typename T::iterator	iter = std::find(t.begin(), t.end(), nbr);
	if (iter != t.end())
		return (iter);
	else
		throw std::invalid_argument("Exception: Number not found");
}

#endif