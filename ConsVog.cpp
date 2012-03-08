#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string frase="";
	int ConsoantesM=0, Consoantesm=0, VogaisM=0, Vogaism=0, Outros=0, ascii;

	cout << "Introduza uma frase: " ;
	getline(cin,frase);
	
	for ( int i = 0; i < frase.size() ; i++ )
	{
		ascii=int(frase[i]);
		if ( ascii >= 65 && ascii <= 90 ) {
			if ( ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 ) {
				VogaisM++;
			} else {
				ConsoantesM++;
			}
		} else if ( ascii >= 97 && ascii <= 122 ) {
			if ( ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117 ) {
				Vogaism++;
			} else {
				Consoantesm++;
			}
		} else {
			Outros++;
		}	
	}

	cout << "Consoantes Maiusculas: " << ConsoantesM << endl;
	cout << "Vogais Maiusculas: " << VogaisM << endl ;
	cout << "Consoantes minusculas: " << Consoantesm << endl;
	cout << "Vogais Maiusculas: " << Vogaism << endl;
	cout << "Outros caracteres: " << Outros << endl;
	return 0;
}