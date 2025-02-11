/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:04:41 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 17:36:09 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

int main()
{
	Weapon AK_47("Kalash");
	Weapon P90("P90");
	Weapon PP_Bizon("P90");
	Weapon Famas("Famas");

	HumanA human1(AK_47, "Mehdi");
	HumanA human2(P90, "Edwin");

	HumanB human3("Lola");
	HumanB human4("Octa");
	return 0;
}