#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;


int contadorCaracteres(string &texto){
	int contador = 0 ;
	
	for(char &a : texto){
		
		if(a != ' ') contador++;
		
    }
	
	return contador;
}

int main(){
	string texto;
	
	cout<<"======Ingrese una frase:====== "<<endl;
	getline(cin,texto);
	
	
	cout<<"\n //La cantidad de caracteres sin espacios es //=  "<<contadorCaracteres(texto)<<endl;
	
	
	return 0;
}