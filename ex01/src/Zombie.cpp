/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:25:39 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 14:03:21 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << this->name << " is destoryed" << std::endl;
}
void Zombie::announce()
{
	std::cout << this->name << " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
