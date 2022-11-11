/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/11 15:10:25 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Span: ";
	sp.printSpan();
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;
	try
	{
		std::cout << "Test with 1 element" << std::endl;
		Span	sp1 = Span(1);
		
		sp1.addNumber(5);
		
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Test with too many elements" << std::endl;
		Span	spMax = Span(3);

		spMax.addNumber(3);
		spMax.addNumber(2);
		spMax.addNumber(1);
		spMax.addNumber(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp10 = Span(10);
		std::cout << "Span10: ";
		sp10.addRange(0, 9, 10);
		sp10.printSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp10000 = Span(10000);
		std::cout << "Span10000: ";
		sp10000.addRange(0, 1, 10000);
		sp10000.printSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp10002 = Span(10000);
		std::cout << "Span10002: ";
		sp10002.addRange(0, 1, 10002);
		sp10002.printSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
