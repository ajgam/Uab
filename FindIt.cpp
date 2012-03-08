#include <iostream>
#include <string>

using namespace std;

int main()
{
	string frase="";
	string search="";
	int counter=0;

	cout << "Introduza uma string: " ;
	getline(cin,frase);
	cout << endl << "Introduza a palavra a pesquisar : " ;
	cin >> search;

	// Procura a "search frase" na frase, devolve a posição na string do frase procurada
	// incrementa o i de modo a "sair" da palavra.
	
	for(int i = frase.find(search, 0); i != string::npos; i = frase.find(search, i)) 
	{
		counter++;
		i++;
	}

	if ( counter == 0 ) {
		cout << "A frase " << search << " não foi encontrada " << endl;
	} else if  ( counter == 1 ) {
		cout << "A frase " << search << " foi encontrada " << counter << " vez " << endl;
	} else {
		cout << "A frase " << search << " foi encontrada " << counter << " vezes " << endl;
	}
	return 0;
}