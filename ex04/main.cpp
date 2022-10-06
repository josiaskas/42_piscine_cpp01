//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//
#include <iostream>
#include <fstream>
#include <sstream>

int	printFileError(const std::string &filename){
	std::cerr << "Error: Sed: "<< filename <<" " << std::strerror(errno) << std::endl;
	return (1);
}

int	do_op(std::ifstream &in, std::ofstream &out, const std::string &s1, const std::string &s2){
	//copy all file char inside a string
	std::stringstream datas;
	datas << in.rdbuf();
	std::string long_string = datas.str();

	std::size_t i = 0;
	do{
		i = long_string.find(s1, i);
		if (i != std::string::npos){
			long_string.erase(i, s1.length());
			long_string.insert(i, s2);
			i = i + s2.length();
		}
	} while (i != std::string::npos);
	out << long_string;
	return 0;
}

int	main(int argc, char *argv[])
{
	std::string	s1,s2, filename;
	std::ifstream	in_file;
	std::ofstream	out_file;

	if (argc == 4){
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];

		in_file.open(filename, std::ios::in);
		if (!in_file.is_open() || !in_file.good())
			return (printFileError(filename));
		if (in_file.eof()){
			std::cerr << "Error: Sed: Can't replace an empty file" << std::endl;
			return 1;
		}
		if (s1.empty()) {
			std::cerr << "Error: Sed: s1 can not be empty, replace a real thing man" << std::endl;
			return 1;
		}
		else {
			out_file.open(filename +".replace", std::ios::out | std::ios::trunc);
			if (!out_file.good() || !out_file.is_open())
				return (printFileError(filename +".replace"));
			return do_op(in_file, out_file, s1, s2);
		}
		//no file close needed destructor will close them and will handle all exception
	}
	std::cerr << "Error: Usage: ./sed <file> <s1> <s2>"<<std::endl;
	return 1;
}