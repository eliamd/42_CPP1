/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:48:22 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 17:09:06 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon weapon;
	std::string name;
public:
	/* ------------------------------- Constructor ------------------------------ */
	HumanB(std::string name);
	~HumanB();
	/* -------------------------------- Functions ------------------------------- */
	void attack();
	void set_weapon(Weapon weapon);

};
