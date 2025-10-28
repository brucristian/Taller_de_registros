/*Estructura básica:
Defina una estructura Persona con los campos: nombre, edad y ciudad. Solicite los
datos e imprímalos en pantalla.*/

#include <iostream>
#include <string>

using namespace std;

struct Persona{
	string nombre;
	int edad;
	string ciudad;
	
};

int main(){
    Persona p1;
    
    cout << "====Ingrese el nombre de la persona=====:" <<endl;
    getline(cin,p1.nombre);
    
    cout << "======Ingrese la edad de la persona=====:" <<endl;
    cin  >>  p1.edad;
    
    cout << "======Ingrese la ciudad de la persona=====: " <<endl;
    getline(cin,p1.ciudad);
    
    cout << "\n EL nombre es: "<<p1.nombre<<endl;
    cout << "\n La edad es: "<<p1.edad<<endl;
    cout << "\n La ciudad es: "<<p1.ciudad<<endl;
    
    return 0;
}