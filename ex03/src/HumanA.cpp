/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:48:55 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/12 15:35:11 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name)
{
}
HumanA::~HumanA()
{
}

void HumanA::attack()
{
	if (!this->weapon.get_type().empty())
	{
		std::cout << this->name << " attacks with their " << this->weapon.get_type() << std::endl;
	}
}
