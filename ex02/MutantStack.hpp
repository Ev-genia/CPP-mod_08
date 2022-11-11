/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:08:08 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/11 14:22:28 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <class T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack();
	MutantStack	&operator=(const MutantStack<T> &);
	MutantStack(const MutantStack<T> &);
	virtual ~MutantStack();

	typedef typename std::stack<T>::container_type::iterator	iterator;
	iterator	begin(void);
	iterator	end(void);
};

# include "MutantStack.tpp"

#endif