/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:38:45 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 18:13:55 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	/* ------------------------------- Constructor ------------------------------ */
	Weapon();
	Weapon(std::string type);
	~Weapon();
	/* --------------------------------- Setters -------------------------------- */
	void setType(std::string type);
	/* --------------------------------- Getters -------------------------------- */
	std::string get_type() const;
};

#endif