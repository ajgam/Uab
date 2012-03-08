#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> testvector;
	int number=-1;

	while ( number != 0 ) {
		cout << "Introduza um inteiro: ";
		cin >> number;
		if ( number != 0 ) { testvector.push_back(number); }
	}
	sort (testvector.begin(), testvector.end());

	cout << "Os cinco maiores numeros : ";
	for(int i=testvector.size() - 5 ; i < testvector.size() ; i++)
	{
		cout << testvector[i] << " " ;
	}
	cout << endl;

	cout << "Os cinco menores numeros : ";
	for(int i=0; i < 5; i++)
	{
		cout << testvector[i] << " " ;
	}
	cout << endl;

	return 0;
}