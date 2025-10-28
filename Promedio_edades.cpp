#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

struct Persona{
	string nombre;
	int edad;
};

void Suma_edades(vector<Persona> &personas, int n){
	int suma = 0;
	
	cout << "\n=====<Lista de Personas>=====\n";
	for(Persona &p : personas){
		cout<<"\n | Nombre : {" << p.nombre <<"} | Edad :{"<<p.edad<<"} |"<< endl;
		suma+=p.edad;
	}
	
   cout<<"\n | Promedio de edades | {"<<(suma*1.0/n)<<"} |"<<endl;
}	





int main(){
	vector<Persona> personas;
	int n;
	
	cout<<"\n //Cuantas personas va ingresar?//: " << endl;
	cin>>n;
	cin.ignore();
	
	for(int i = 0 ; i < n ; i++){
		Persona p;
		
		cout << "\nNombre persona #" << i + 1 << ": ";
        getline(cin, p.nombre);
       

        cout << "Edad persona #" << i + 1 << ": ";
        cin >> p.edad;
        cin.ignore();

        personas.push_back(p);
	}
	
	
	Suma_edades(personas, n);
	
	return 0;
}