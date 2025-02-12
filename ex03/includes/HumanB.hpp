/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:48:22 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/12 15:42:31 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* weapon;
	std::string name;
public:
	/* ------------------------------- Constructor ------------------------------ */
	HumanB(std::string name);
	~HumanB();
	/* -------------------------------- Functions ------------------------------- */
	void attack();
	void setWeapon(Weapon* weapon);

};

#endif