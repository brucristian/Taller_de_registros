#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

struct Persona {
    string nombre;
    int edad;
    string ciudad;
};

string minuscu(string texto) {
    for (char &c : texto) {
        c = tolower(c);
    }
    return texto;
}

void buscadorpa(vector<Persona> personas, string buscar) {
    bool encontrada = false;

    for (Persona &p : personas) { 
        if (minuscu(p.ciudad) == minuscu(buscar)){ 
            cout << "\n"<<p.nombre << "/ (" << p.edad
                 << " anios)/ vive en " << p.ciudad <<"/"<<  endl;
            encontrada = true;
        }
    }

    if (!encontrada) {
        cout << "No se encontraron personas en esa ciudad." << endl;
    }
}

int main() {
    vector<Persona> personas;
    int n;
    string buscar;

    cout << "//Cuantas personas va ingresar//: " << endl;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        Persona p;

        cout << "\nNombre persona #" << i + 1 << ": ";
        getline(cin, p.nombre);

        cout << "Edad persona #" << i + 1 << ": ";
        cin >> p.edad;
        cin.ignore();

        cout << "Ciudad persona #" << i + 1 << ": ";
        getline(cin, p.ciudad);

        personas.push_back(p);
    }

    cout << "\nIngrese la ciudad a buscar: ";
    getline(cin, buscar);

    buscadorpa(personas, buscar);
    
    return 0;
}
