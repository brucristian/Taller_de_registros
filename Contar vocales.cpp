#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


using namespace std;

void minuscula(string &texto){
	
	for(char &c : texto){
		c = tolower(c);
	}
	
}

int contarVocales(string &texto){
	 int contador = 0;
	
	for(char &e : texto){
		if(e == 'a'|| e == 'e'|| e == 'i' || e == 'o' || e == 'u') contador ++;
	}
	
	return contador;
}


int main(){
	string texto;
	
	cout << " ====Ingrese el nombre que quieres contar vocales=====" << endl;
	cout << " Nombre completo : ";
	getline(cin,texto);
	
    minuscula(texto);
    
    cout << " La palabra tiene " << contarVocales(texto) <<" vocales. "<< endl;
	
	return 0;
}