/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:20:33 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/04 16:18:29 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>  // Para ofstream
#include <iostream> // Para cout
#include <string>   // Para string
#include <cstdlib>  // Para exit


/**
 * @brief this
 * 
 * @param argv 
 * @param line 
 * @return int 
 */
int searchAndReplace(char **argv, std::string line)
{
	std::string fileOut = argv[1] + std::string(".replace");
	const char *fileReplaced = fileOut.c_str();
	std::ofstream fileOutStream(fileReplaced, std::ofstream::app);
 	if (!fileOutStream.is_open())
	{
		std::cerr << "Error opening the file to write" << std::endl;
		exit (1);
	}
	std::string s1 = argv[2];
	std::size_t lastFound;
	std::size_t found = line.find(s1);
	size_t i = -1;
	if (found==std::string::npos)
	{
		fileOutStream << line;
		return 0;
	}
	while (found!=std::string::npos)
	{	
		while ( ++i < found)
			fileOutStream << line[i];
		fileOutStream <<  argv[3];
		i += s1.length() -1;
		lastFound = found + s1.length() -1 ;
		found=line.find(s1,found+1);
	}
	if (lastFound != std::string::npos)
	{
		while ( ++lastFound < line.length())
			fileOutStream << line[lastFound];
	}
	fileOutStream.close();
	return 0;
}

/**
 * @brief open in truncate mode the file to write the replaced strings
 * it can be done returning a pointer to the file to be 
 * closed in other location.
 * for the name I have "concatenate the string and tehn converted to const char*" 
 * @param argv 
 * @return ** void 
 */
void openTruncate(char **argv)
{
	std::string fileOutName = argv[1] + std::string(".replace");
	const char* fileReplaced = fileOutName.c_str();
	std::ofstream fileOut(fileReplaced);
    if (!fileOut.is_open()) 
	{
		std::cerr << "Error opening the file to write" << std::endl;
        exit (1);;
    }
	fileOut.close();
}

/**
 * @brief open the files to read and write, and call the searchAndReplace function
 * 
 * a truncated file is created to write the replaced strings to do it even when 
 * an empty file is passed as an argument.
 * @param argv 
 * @return ** int 
 */
int openRead(char **argv)
{
	const char *filename = argv[1];
	std::string line;
	std::ifstream myfile (filename);
	if (myfile.is_open()) 
	{
		openTruncate(argv);
		while (getline (myfile,line))
		{
			if (myfile.eof() == false)
				line += "\n";
		 	searchAndReplace (argv, line);
		}
		myfile.close();
	}
	else
		std::cout << "Unable to open a file to read" << std::endl; 
	return 0;
}

/**
 * main function check the number of arguments, if s1 is empty and 
 * launch the openRead function. 
*/
int main(int ac, char **argv)
{
	if ( ac == 4 )
	{
		std::string s1 = argv[2];
		if (s1.length() == 0)
		{
			std::cout << "Error: empty string to be replaced" << std::endl;
			return 1;
		}
		openRead(argv);
		return 0;
	}
	else
		std::cout << "Please insert ./mysed filename s1(to be replaced) s2(new string)" << std::endl;
	return 1;
}
