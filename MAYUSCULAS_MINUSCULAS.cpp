#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void minuscula(string &texto){
	for(char &c : texto){
		c = tolower(c);
	}
}

void mayuscula (string &texto){
	for(char &e : texto){
		e = toupper(e);
	}
}


int main(){
	string cadena;
	
	cout << "====Ingrese la cadena que quiera=====  :" <<endl;
	getline(cin,cadena);
	
    minuscula(cadena);
    
    cout << "//La cadena en minuscula es //: "<<cadena<<endl;
    
    mayuscula(cadena);
    
    cout << "//La cadena en mayuscula es //: "<<cadena <<endl;
	
	
	return 0;
}