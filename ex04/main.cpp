//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//
#include <iostream>
#include <fstream>

std::string replace_in_line(std::string &s1, std::string &s2, std::string &line){
	std::string	new_line;
	std::size_t found_position;
	std::size_t i = 0;

	do{
		found_position = line.find(s1, i);
		if ((found_position != std::string::npos)){
			new_line += line.substr(i,  found_position);
			new_line += s2;
			i = found_position + s1.length();
		}else{
			new_line += line.substr(i, (line.length() - i));
			i = line.length();
		}
	} while (i < line.length());
	return (new_line);
}

int	printFileOpenError(const std::string &filename){
	std::cerr << "Sed: Error: can't open file: " << filename << std::endl;
	return (1);
}

int	main(int argc, char *argv[])
{
	std::string	s1,s2, filename, replace_filename, new_line;
	std::ifstream	in_file;
	std::ofstream	out_file;

	if (argc == 4){
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		replace_filename = filename +".replace";
		if (s1.empty()) {
			std::cerr << "Sed: Can't replace an empty string" << std::endl;
			return 1;
		}
		in_file.open(filename, std::ios::in);
		if (!in_file.is_open())
			return (printFileOpenError(filename));
		out_file.open(replace_filename, std::ios::out | std::ios::trunc);
		if (!out_file.is_open())
			return (printFileOpenError(filename));
		for (std::string line; std::getline(in_file, line);){
			new_line = replace_in_line(s1, s2, line);
			out_file << new_line << std::endl;
		}

		in_file.close(); // no need, will be closed automatically
		out_file.close(); // no need, will be closed automatically
	}
	else {
		std::cerr << "Sed: Usage: <file> <s1> <s2>"<<std::endl;
		return 1;
	}
	return (0);
}