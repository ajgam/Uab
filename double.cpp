#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double number=sqrt(double(2));

	cout << "Number is: " << number << endl;

	for ( int i=0 ; i < 4; i++) 
	{
		std::cout << std::setprecision(i) << std::fixed;
		cout << number << endl;
	}
	return 0;
}