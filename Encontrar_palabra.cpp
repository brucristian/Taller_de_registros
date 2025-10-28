/*Buscar palabra en frase:
Solicite una frase y una palabra. Indique si la palabra aparece dentro de la frase.*/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void minuscula(string &texto) {
    for (char &c : texto) {
        c = tolower(c);
    }
}

bool encontrarPalabra(string &frase, string &palabra){
	
	return frase.find(palabra);
}

int main(){
	string frase;
	string palabra;
	
	cout << "#####Ingrese la frase##### " << endl ;
	cout << "frase: ";
	getline(cin,frase);
	
	cout << "#####ingrese la palabra####"<< endl ;
	cin >> palabra ;
	
	minuscula(frase);
	minuscula(palabra);
	
	if(encontrarPalabra(frase,palabra)){
		cout << "=====SI SE ENCONTRO LA PALABRA====="<<endl;
		
	}else{
		cout << "======NO SE ENCONTRO LA PALABRA===="<<endl;
	}
	
	return 0;
}