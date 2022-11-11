/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:51:11 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/11 11:55:51 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	unsigned int		maxSize;
	std::vector<int>	arr;
public:
	Span();
	Span	&operator=(const Span &);
	Span(const Span &);
	virtual ~Span();

	Span(unsigned int);
	void				addNumber(unsigned int);
	int					shortestSpan();
	int					longestSpan();
	void				printSpan();
	std::vector<int>	generateRange(unsigned int, unsigned int, unsigned int);
	void				addRange(unsigned int, unsigned int, unsigned int);
};

#endif