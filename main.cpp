#include <iostream>
#include "TDADocente.h"
#include "TDAEstudiantes.h"

using namespace std;

int main(){

    char tipoUsuario = ' ';

    while(tipoUsuario != '2'){
        cout << "\tPor favor indique el tipo de usuario que es\n" << endl;
        cout << "\t\t0. Docente" << endl;
        cout << "\t\t1. Estudiante" << endl;
        cout << "\t\t2. Salir" << endl;
        cin >> tipoUsuario;
        system("cls");
        
        switch(tipoUsuario){
            case '0': menuDocente(); cin.get(); cin.ignore(); break;
            case '1': cout << "menu Estudiante" << endl; cin.get(); cin.ignore(); break;
            case '2': cout << "Salida del sistema" << endl; cin.get(); cin.ignore(); break;
            default: cout << "El caracter introducido no es valido. Escoja una de las tres opciones" << endl; cin.get(); cin.ignore();
        }
        system("cls");
    }
    
    return 0;
}
