/*Arreglo de estructuras:
Lea los datos de 3 personas usando la estructura Persona y muestre sus nombres
en mayúsculas.*/


#include <iostream>
#include <cctype>
#include <string>

using namespace std;

struct Persona{
   	string nombre;
};

void mayuscula(Persona &personas){

  	for(char &e :  personas.nombre){
		e = toupper(e);
	}
}
	

int main(){
	Persona personas[3];
	
	for(int i = 0 ; i < 3 ; i++ ){
		
		cout << "Ingrese el nombre de la persona #" << i+1 << endl;
		getline(cin,personas[i].nombre);
		mayuscula(personas[i]);
    }
    
    cout << "\n ====LISTA DE NOMBRES====" <<endl;
    for(int i = 0 ; i < 3 ; i++){
    	cout<<"Nombre #"<<i+1<<": "<<personas[i].nombre<<endl;
	}
    
	
	return 0;
}