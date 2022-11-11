/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:08:00 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/11 14:34:01 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef MUTANTSTACK_HPP

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	this->c = rhs.c;
	return (*this);
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src): std::stack<T>(src)
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif