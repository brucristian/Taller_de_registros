/*Buscar persona por nombre:
Permita al usuario buscar una persona en el arreglo escribiendo su nombre. Si
existe, muestre toda su información.*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;


struct Persona{
	string nombre;
	int edad;
	string barrio;
	
};


string Minus(string texto) {
    for (char &c : texto) {
    	c = tolower(c);
	}
    return texto;
}

void buscarPersona(Persona personas[],int n,string buscar){
	
	
	for(int i = 0 ; i < n ; i++){
		if(Minus(personas[i].nombre) == Minus(buscar)){
			 cout << "El nombre " <<personas[i].nombre << ", tiene "
             << personas[i].edad
             << " anios y vive en el barrio " << personas[i].barrio<<endl;
             return;
		}
	}
	
	cout << "\n No se encontro a la persona con nombre: " << buscar << endl;
}


int main(){
	int n;
	string buscar;
	
	cout << "\n ¿ Cuantas personas desea ingresar ? = ";
	cin >> n;
	cin.ignore();
	
	Persona personas[n];
	
	for(int i = 0 ; i < n ; i++ ){
		
		cout << "\n Ingrese el nombre de la persona #" << i + 1 <<endl;
		getline(cin , personas[i].nombre);
		
	
		cout  << "\n Ingrese la edad de la persona #"  << i + 1 <<endl;
		cin >> personas[i].edad;
		cin.ignore();
		
		
		cout << "\n Ingrese el barrio de la persona #" << i + 1 <<endl;
		getline(cin , personas[i].barrio);
		
		system("cls");
		system("PAUSE");
		
	}
	
	
	
	cout<<"\n /Ingrese el nombre que quiera buscar/// :"<<endl;
	getline(cin,buscar);
	
	
	buscarPersona(personas,n,buscar);
	
	return 0;
}