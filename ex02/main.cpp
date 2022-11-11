/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/11 15:05:21 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "mstack.top(): " << mstack.top() << std::endl;
	std::cout << "mstack.size(): " << mstack.size() << std::endl;

	mstack.pop();
	std::cout << "mstack.top(): " << mstack.top() << std::endl;
	std::cout << "mstack.size(): " << mstack.size() << std::endl;

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;

	std::cout << "mstack: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int>	s(mstack);

	std::list<int>	mList;
	mList.push_back(5);
	mList.push_back(17);
	mList.push_back(3);
	mList.push_back(5);
	mList.push_back(737);
	mList.push_back(0);
	std::cout << "mList.top(): " << mList.back() << std::endl;
	std::cout << "mList.size(): " << mList.size() << std::endl;

	mList.pop_back();
	std::cout << "mList.top(): " << mList.back() << std::endl;
	std::cout << "mList.size(): " << mList.size() << std::endl;

	std::list<int>::iterator	itL = mList.begin();
	std::list<int>::iterator	iteL = mList.end();
	std::cout << "mList: " << std::endl;
	while (itL != iteL)
	{
		std::cout << *itL << std::endl;
		++itL;
	}
	return 0;
}
