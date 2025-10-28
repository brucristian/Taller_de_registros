#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Persona {
    string nombres;
    string apellidos;
};

bool comparador_de_nombres(const Persona &a, const Persona &b){
    return a.nombres < b.nombres;
}

void Alfabeticamente( vector<Persona> &nombres_apellidos){
    cout << "\n======= Lista de nombres (normal) =======\n";
    for (Persona &p : nombres_apellidos) {
        cout << " | Nombres: {" << p.nombres << "} | Apellidos: {" << p.apellidos << "} |\n";
    }

 
    sort(nombres_apellidos.begin(), nombres_apellidos.end(), comparador_de_nombres);

    cout << "\n======= Lista de nombres (alfabéticamente) =======\n";
    for (Persona &p : nombres_apellidos) {
        cout << " | Nombres: {" << p.nombres << "} | Apellidos: {" << p.apellidos << "} |\n";
    }
}

int main() {
    vector<Persona> nombres_apellidos;
    int n;

    cout << "\n// Cuantas personas va a ingresar?: //\n";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        Persona p;

        cout << "\nNombres de la Persona #" << i + 1 << ": ";
        getline(cin, p.nombres);

        cout << "Apellidos de la Persona #" << i + 1 << ": ";
        getline(cin, p.apellidos);

        
        nombres_apellidos.push_back(p);
    }

    Alfabeticamente(nombres_apellidos);
    return 0;
}
