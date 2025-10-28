#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Persona {
    string nombres;
};

void Convertidor_caracteres( vector<Persona> &personas){
        
		for(Persona &p : personas){
       	   for(char &i : p.nombres){
       	   	i = tolower(i);
       	    if( i == 'a') i = '@';  	
		 }
	   }
	   
	   cout<<"\n ======Lista de nombres(cambiada)=====" <<endl;
	   for(Persona &p : personas){
	   	cout<<"\n |Nombre : {"<<p.nombres<<"}"<<endl;
	   }
   
}

int main() {
    vector<Persona> personas;
    int n;

    cout << "\n// Cuantas personas va a ingresar?: //\n";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        Persona p;

        cout << "\nNombres de la Persona #" << i + 1 << ": ";
        getline(cin, p.nombres);


         personas.push_back(p);
    }

    Convertidor_caracteres(personas);
    return 0;
}
