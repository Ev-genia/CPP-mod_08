/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/10 00:46:48 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <set>

void	funcVector()
{
	std::vector<int>			vectorInt;
	std::vector<int>::iterator	iter;
	int							findNum;

	for (int i = 0; i < 7; i++)
	{
		vectorInt.push_back(i);
	}
	findNum = 3;
	try
	{
		iter = easyfind(vectorInt, findNum);
		std::cout << "Find elem number " << findNum << " is " << *iter << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Elem number " << findNum << " error: ";
		std::cerr << e.what() << "\n";
	}
	findNum = 10;
	try
	{
		iter = easyfind(vectorInt, findNum);
		std::cout << "Find elem number " << findNum << " is " << *iter << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Elem number " << findNum << " error: ";
		std::cerr << e.what() << "\n";
	}
}

void	funcSet()
{
	std::set<int>	setInt;
	int				findNum;
	std::set<int>::iterator	iter;


	for (int i = 5; i < 15; i++)
	{
		setInt.insert(i);
	}
	findNum = 6;
	try
	{
		iter = easyfind(setInt, findNum);
		std::cout << "Find elem number " << findNum << " is " << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Elem number " << findNum << " error: ";
		std::cerr << e.what() << '\n';
	}
	findNum = 3;
	try
	{
		iter = easyfind(setInt, findNum);
		std::cout << "Find elem number " << findNum << " is " << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Elem number " << findNum << " error: ";
		std::cerr << e.what() << '\n';
	}
}

int	main( void )
{
	funcVector();
	funcSet();
	return 0;
}
