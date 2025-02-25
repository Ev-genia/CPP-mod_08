/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:50:32 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/11 16:34:00 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): maxSize(0)
{
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		maxSize = rhs.maxSize;
		arr = rhs.arr;
	}
	return (*this);
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span()
{
}

Span::Span(unsigned int enterSize): maxSize(enterSize)
{
}

void	Span::addNumber(unsigned int enterNbr)
{
	if (arr.size() < maxSize)
	{
		arr.push_back(enterNbr);
		std::sort(arr.begin(), arr.end());
	}
	else
		throw (std::length_error("Exception: Span is alresady full"));
}

int	Span::shortestSpan()
{
	int							rez;
	std::vector<int>::iterator	iter1;
	std::vector<int>::iterator	iter2;

	if (arr.size() < 2)
		throw (std::length_error("Exception: Span is too small"));
	iter1 = arr.begin();
	iter2 = iter1 + 1;
	rez = *iter2 - *iter1;
	while (iter2 != arr.end())
	{
		if (*iter2 - *iter1 < rez)
			rez = *iter2 - *iter1;
		iter1++;
		iter2 = iter1 + 1;
	}
	return (rez);
}

int	Span::longestSpan()
{
	int	rez;

	if (arr.size() < 2)
		throw (std::length_error("Exception: Span is too small"));
	rez = *std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end());
	return (rez);
}

void	Span::printSpan()
{
	for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
}

std::vector<int>	Span::generateRange(unsigned int from, unsigned int to, unsigned int count)
{
	std::vector<int>	rez;

	for (int i = 0; i < count; i++)
	{
		rez.push_back(from + (std::rand() % (to - from + 1)));
	}
	return (rez);
}

void	Span::addRange(unsigned int from, unsigned int to, unsigned int count)
{

	if (maxSize - arr.size() >= count)
	{
		std::vector<int>	tmp = generateRange(from, to, count);
		arr.insert(arr.end(), tmp.begin(), tmp.end());
	}
	else
		throw (std::length_error("Exception: Too many elements to add"));
}
