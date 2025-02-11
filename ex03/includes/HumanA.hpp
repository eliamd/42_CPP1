/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:48:22 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 17:32:23 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon weapon;
	std::string name;
public:
	/* ------------------------------- Constructor ------------------------------ */
	HumanA(Weapon weapon, std::string name);
	~HumanA();
	/* -------------------------------- Functions ------------------------------- */
	void attack();
};
