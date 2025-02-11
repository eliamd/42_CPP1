/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:33:26 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 14:50:12 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <string>
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);
		horde[i].announce();
	}
	return horde;
}


int main()
{
	Zombie *horde = zombieHorde(20, "Ha");
	delete[] horde;
	return 0;
}