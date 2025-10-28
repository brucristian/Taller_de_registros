#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string minus(string &texto){
	
	for(char &c : texto){
	  c = tolower(c);
	}
	return texto;
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
	getline(cin, palabra);
	
	minus(palabra);
	
	if(!Palidromo(palabra)){
		cout << "\n =====NO ES PALIDROMO =====" << endl;
		
	}else{
		
		cout << "\n ===== SI ES PALIDROMO ====" << endl;
	}

}
