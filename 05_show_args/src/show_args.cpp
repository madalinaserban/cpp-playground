
#include <iostream>
#include <string>


int main(int argc, char* argv[])
{
	int aux = argc;
	int i = 1;
	while (aux)
	{
		std::string argumentAsString = argv[i];
		i++;
		aux--;
		std::cout << argumentAsString<<" "<<"\n";
	}



	return 0;
}