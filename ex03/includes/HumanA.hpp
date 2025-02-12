/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:48:22 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/12 15:34:45 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon& weapon;
	std::string name;
public:
	/* ------------------------------- Constructor ------------------------------ */
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	/* -------------------------------- Functions ------------------------------- */
	void attack();
};

#endif