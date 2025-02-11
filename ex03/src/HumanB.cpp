/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:48:55 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 17:09:23 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name)
{
	this->name = name;
}
HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.get_type() << std::endl;
}

void HumanB::set_weapon(Weapon weapon)
{
	this->weapon = weapon;
}
