#include <iostream>

#define MAX 100

int Prime(int number)
{
	int i,prime=1;

		for ( i = 2 ; i < number ; i++ )
		{
			if ( number%i == 0 ) prime=0;
		}
	return prime;
}

int main()
{
	int number=2,i=0;
	
	while (i < MAX )
	{
		if (Prime(number))
		{ 
			std::cout << number << " " ; 
			i++;
		}
		number++;
	}
	std::cout << std::endl;
	return 0;
}