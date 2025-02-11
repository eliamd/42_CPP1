/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:04:41 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/11 16:34:54 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string string1 = "HI THIS IS BRAIN";

	std::string *pointer1 = &string1;
	std::string& ref1 = string1;

	std::cout << "📍 Adresse de la string -> " << &string1 << std::endl;
	std::cout << "🪪 Adresse du pointeur -> " << &pointer1 << std::endl;
	std::cout << "🪪 Adresse de la ref -> " << &ref1 << std::endl;

	std::cout << "------------------------" << std::endl;

	std::cout << "📍 Value de string -> " << string1 << std::endl;
	std::cout << "🪪 Value du pointeur -> " << *pointer1 << std::endl;
	std::cout << "🪪 Value de la ref -> " << &ref1 << std::endl;
	return 0;
}