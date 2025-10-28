#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

string Minus(string texto) {
    for (char &c : texto) {
    	c = tolower(c);
	}
    return texto;
}

struct Persona{
	string nombre;
	int edad;
	string nacionalidad;
};

void registrar_persona(vector<Persona> &personas){
	int n;
	
	cout<<"\n //Cuantas personas va ingresar?//: " << endl;
	cin>>n;
	cin.ignore();
	
	for(int i = 0 ; i < n ; i++){
		Persona p;
		
		cout << "\nNombre persona #" << i + 1 << ": ";
        getline(cin, p.nombre);
       
        do{
		
        cout << "Edad persona #" << i + 1 << ": ";
        cin >> p.edad;
        cin.ignore();
        
        if(p.edad<0){
        	cout<<" !!ERROR!! Ingrese una edad valida"<<endl;
		}
        
        }while(p.edad<0);
        
        cout << "Nacionalidad persona #"<< i + 1 << ": ";
        getline(cin, p.nacionalidad);

        personas.push_back(p);
	}
	
	cout << "\n =========PERSONAS INGRESADA CON EXITO======= \n"<<endl;
}

void Buscar_por_nombre(vector<Persona> &personas){
    if(personas.empty()){
    	cout <<"=======NO HAY REGISTROS====="<<endl;
    	return;
	}
	bool encontrado = false;
	string buscar;
	
	cout<<"Ingrese la persona a buscar: "<<endl;
	getline(cin ,buscar);
	
	cout<<"\n ======Buscados======="<<endl;
    for(Persona &p : personas){
    	if(Minus(p.nombre) == Minus(buscar)){
    		encontrado = true;
    		cout <<"\n |Nombre: {"<<p.nombre<<"} | Edad: {"<<p.edad<<"} | Nacionalidad: {"<<p.nacionalidad<<"} |"<<endl;
		}
	}
	if(!encontrado){
		cout <<"========NO SE ENCONTRO REGISTRO CON ESE NOMBRE=======" <<endl;
	}
}

void mostrar_registro( vector<Persona> &personas){
    if(personas.empty()){
    	cout <<"=======NO HAY REGISTROS====="<<endl;
    	return;
	}

	
	cout<<"\n ======REGISTRO======="<<endl;
    for(Persona &p : personas){
       cout <<"\n |Nombre: {"<<p.nombre<<"} | Edad: {"<<p.edad<<"} | Nacionalidad: {"<<p.nacionalidad<<"} |"<<endl;
	}
	
}

int main(){
   vector<Persona> personas;
   int op;
   
   do{
   	 
   	 cout << "\n=======MENU========\n" << endl;
   	 cout << "[1] Registrar una nueva persona. "<<endl;
   	 cout << "[2] Buscar persona por nombre."  <<endl;
   	 cout << "[3] Mostrar todas las personas registradas."<<endl;
   	 cout << "[4] Salir del programa."<<endl;
   	 cout<<"Opcion: ";
   	 cin >> op;
   	 cin.ignore();
   	 
   	 switch(op){
		
   	 case 1:
   	 	registrar_persona(personas);
   	 break;
   	 case 2:
   	 	Buscar_por_nombre(personas);
   	 break;
   	 case 3:
   	 	mostrar_registro(personas);
   	 break;
   	 case 4:
   	 cout << "\n Saliendo del programa..." << endl;
   	 break;
   	 default:
   	 cout << "\n !ERROR!/ingrese una opcion valida/ "<<endl;
   	 break;
    }
   	}while(op !=  4);	
	return 0;
}