/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:33:26 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 13:53:12 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <string>
#include <iostream>

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

int main()
{
	Zombie zombie("Zombie1");
	zombie.announce();

	Zombie zombie2("Zombie2");
	zombie2.announce();


	Zombie* dynamicZombie = new Zombie("DynamicZombie");
	dynamicZombie->announce();
	delete dynamicZombie;


	randomChump("RandomChump1");
	return 0;
}