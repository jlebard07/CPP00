#include <iostream>
#include <cctype>

std::string	in_maj(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = (char)std::toupper(str[i]);
	return (str);
}

int	 main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			std::cout<<in_maj(argv[i])<<std::endl;
	}
}
