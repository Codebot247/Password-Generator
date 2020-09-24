#include <iostream>
#include <stdlib.h>

int main()
{
	int seed, length;
	std::cout << "Enter seed: ";
	std::cin >> seed;
	srand(seed);

	std::cout << "Enter password length: ";
	std::cin >> length;

	for (int i = 0; i != length; i++)
	{
		std::cout << (char)(33+rand()%94);
	}

	std::cout << std::endl << "PRESS ENTER TO EXIT" << std::endl;
	
	while ((getchar()) != '\n');
	getchar();
	
	return 0;
}