/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:55:42 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/13 13:30:16 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool validateArguments(int argc, char **argv) {
	if (argc != 4
		|| argv[1] == NULL
		|| argv[2] == NULL
		|| argv[3] == NULL)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return false;
	}
	return true;
}

bool openFileIn(std::ifstream &inputFile, std::string filename) {
	inputFile.open(filename);
	if (!inputFile.is_open()) {
		std::cout << "Error: could not open file" << std::endl;
		return false;
	}
	return true;
}

bool openFileOut(std::ofstream  &outputFile, std::string filename) {
	filename += ".replace";
	outputFile.open(filename);
	if (!outputFile.is_open()) {
		std::cout << "Error: could not open file" << std::endl;
		return false;
	}
	return true;
}

std::string replaceSubstring(const std::string& original, const std::string& s1, const std::string& s2) {
	std::string result;
	size_t pos = 0;
	size_t foundPos;

	while ((foundPos = original.find(s1, pos)) != std::string::npos) {
		result.append(original, pos, foundPos - pos);
		result.append(s2);
		pos = foundPos + s1.length();
	}
	return result;
}

int main(int argc, char **argv)
{
	std::ifstream inputFile;
	std::ofstream outputFile;
	std::string line;

	if (!validateArguments(argc, argv))
		return 1;
	if (!openFileIn(inputFile, argv[1]))
		return 1;
	if (!openFileOut(outputFile, argv[1]))
		return 1;

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	while (std::getline(inputFile, line))
	{
		outputFile << replaceSubstring(line, s1, s2) << std::endl;
	}

}
