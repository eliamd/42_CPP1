/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:24:06 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 14:09:36 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*                                Class Zombie                                */
/* -------------------------------------------------------------------------- */

class Zombie
{
private:
	std::string name;
public:
	/* ------------------------------- Contructor ------------------------------- */
	Zombie() {}
	Zombie(std::string name);
	/* ------------------------------- Destructor ------------------------------- */
	~Zombie();
	/* -------------------------------- Functions ------------------------------- */
	void announce();
	Zombie *zombieHorde(int N, std::string name);

	/* --------------------------------- Setters -------------------------------- */
	void set_name(std::string);
};