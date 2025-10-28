#include <iostream>
#include <string>
#include <map>
using namespace std;

struct Persona {
    string nombres;
    string apellidos;
};

void Alfabeticamente(multimap<string, string> &personas) {
    cout << "\n======= Lista ordenada alfabeticamente =======\n";
    for (auto &p : personas) {
        cout << " Nombres: {" << p.first << "} | Apellidos: {" << p.second << "}\n";
    }
}

int main() {
    multimap<string, string> nombres_apellidos;
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

        
        nombres_apellidos.insert({p.nombres, p.apellidos});
    }

    Alfabeticamente(nombres_apellidos);
    return 0;
}
