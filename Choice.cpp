#include <iostream>
#include <string>

#define MAX_NUM 999;
#define MIN_NUM 1;

using namespace std;

int main()
{
	
	int min=MIN_NUM;
	int max=MAX_NUM;
	int mytry=(max+min)/2;

	string answer="";
	bool right=false;

	cout << "Pense num numero entre " << min << " e " << max << endl;

	while ( max != min )
	{
		cout << "O numero e maior que " << mytry << "(" << max << "|" << min << ")" << " ? (Ss|Nn) :" ;
		cin >> answer;		
			if ( answer == "N" || answer == "n" ) {
				max=mytry;
			} else if ( answer == "S" || answer == "s" ) {
				min=mytry+1;
			}
		mytry=(max+min)/2;
	}
	cout << "O seu numero e :" << mytry << endl;
	return 0;
}