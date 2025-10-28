/*en mayúsculas.
8. Contar caracteres de cada nombre:
Usando el arreglo de Persona, muestre el número de caracteres que tiene el
nombre de cada persona.*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int contadorCaracteres(string &texto){
	int contador = 0 ;
	
	for(char &a : texto){
		
	  if( a != ' ' )contador++;
		
    }
	
	return contador;
}

int main(){
	int n;
	
	cout << "Cuantos nombres va ingresar: " <<endl;
	cin >> n;
	cin.ignore();
	
	string Persona[n];
	
	for (int i = 0; i < n ; i++){
		
		cout<<"====INGRESE EL NOMBRE #"<< i + 1 <<"===="<<endl;
		
	    getline(cin, Persona[i]);
    }
	
	 cout << "\n==== RESULTADOS ====\n";
    for (int i = 0; i < n; i++) {
        cout << "El nombre #" << i + 1 << " tiene "
             << contadorCaracteres(Persona[i])
             << " caracteres (sin contar espacios)" << endl;
    }

}