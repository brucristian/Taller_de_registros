#include <iostream>
#include <string>

using namespace std;

void minuscula(string &palabra){
	
	for(char &c : palabra){
		c = tolower(c);
	}
	
}

bool Palidromo(string palabra){
	string palabravolteada = "";
	
	for(int i=palabra.size()-1; i >= 0 ; i --){
		
		palabravolteada += palabra[i];
		
		if(palabravolteada == palabra){
			return true;
		}
	}
	
	return false;
}


int main(){
	string palabra;
	
	cout << "Ingrese la palabra que desee: " <<endl;
	cin >> palabra ;
	
	minuscula(palabra);
	
	if(!Palidromo(palabra)){
		cout << "\n =====NO ES PALIDROMO =====" << endl;
		
	}else{
		
		cout << "\n ===== SI ES PALIDROMO ====" << endl;
	}
	
	
}