#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Direccion{
   string calle;
   string barrio;	
};

struct Persona{
	string nombre;
	int edad;
	Direccion direccion;
};

int main(){
	int n;
	
	cout << "\n // Cuantas personas va ingresar? //: " <<endl;
	cin >> n;
	cin.ignore();
	
	vector<Persona>personas;
	
	for(int i = 0 ; i < n ; i++ ){
		Persona p;
		
		cout << "\n Nombre persona #" << i + 1 <<": ";
		getline( cin , p.nombre);
		
		cout << " \n Edad persona #" << i + 1 <<" :";
		cin >> p.edad;
		cin.ignore();
		
		cout << "\n Direccion :"<<endl;
		cout<< "\n Calle Persona #" << i + 1 <<" : ";
		getline(cin, p.direccion.calle);
		 
		cout<< "\n Barrio Persona #" << i + 1 <<" : ";
		getline(cin, p.direccion.barrio);
		
		personas.push_back(p);
	}
	    for(Persona &p : personas){
		
     	cout << "\n | Nombre : {" <<p.nombre<<"} | Edad: {"<<p.edad<<"} | Direccion: {"<<p.direccion.barrio<<","<<p.direccion.calle<<"} |"<<endl;
	    }
	
	return 0;
}