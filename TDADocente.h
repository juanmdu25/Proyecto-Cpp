#include <iostream>

using namespace std;

void menuDocente(){

    char opcion = ' ';

    while(opcion != '9'){
        cout << "                ~~~~~~~~~~ Menu ~~~~~~~~~~\n                " << endl;
        cout << "\t0. Agregar Pregunta                                       " << endl;
        cout << "\t1. Modificar Pregunta                                     " << endl;
        cout << "\t2. Eliminar Pregunta                                      " << endl;
        cout << "\t3. Crear Examen                                           " << endl;
        cout << "\t4. Modificar Examen                                       " << endl;
        cout << "\t5. Eliminar Examen                                        " << endl;
        cout << "\t6. Mostrar Promedio de Notas                              " << endl;
        cout << "\t7. Mostrar Estatus del Estudiante con Respecto a un Examen" << endl;
        cout << "\t8. Mostrar las Notas                                      " << endl;
        cout << "\t9. Volver al menu principal                        " << endl;
        cin >> opcion;

        switch(opcion){
            case '0':  
            case '1':  
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8': cout << "To be inputted" << endl; cin.get(); break;
            case '9': cout << "Salida del sistema" << endl; cin.get(); break;
            default: cout << "El caracter introducido no es valido. Escoja una de las opciones mostradas" << endl; cin.get(); 
        }
    }
}