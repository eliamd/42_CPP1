/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:03:22 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/13 13:47:55 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
#include <string>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	/* ------------------------------- Constructor ------------------------------ */
	Harl();
	~Harl();
	/* -------------------------------- Functions ------------------------------- */
	void complain( std::string level );
};

#endif