#include <iostream>
#include "TDADocente.h"

using namespace std;

int main(){

    char tipoUsuario = ' ';

    while(tipoUsuario != '3'){
        cout << "\tPor favor indique el tipo de usuario que es\n" << endl;
        cout << "\t\t1. Docente" << endl;
        cout << "\t\t2. Estudiante" << endl;
        cout << "\t\t3. Salir" << endl;
        cin >> tipoUsuario;
    
        switch(tipoUsuario){
            case '1': menuDocente(); cin.get(); cin.ignore(); break;
            case '2': cout << "menu Estudiante" << endl; cin.get(); cin.ignore(); break;
            case '3': cout << "Salida del sistema" << endl; cin.get(); cin.ignore(); break;
            default: cout << "El caracter introducido no es valido. Escoja una de las tres opciones" << endl; cin.get(); cin.ignore();
    }   }
    return 0;
}