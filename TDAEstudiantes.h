#include <iostream>

using namespace std;

void menuEstudiantes() {

	char opcion = ' ';

	while (opcion != '5') {

		cout << "                   ~~~~~~~~~~~~~~ Menu ~~~~~~~~~~~~~~~                  \n" << endl;
		cout << "\t0. Responder Examen.                                                    " << endl;
		cout << "\t1. Ver Nota de Examen.                                                  " << endl;
		cout << "\t2. Ver Todas las Notas.                                                 " << endl;
		cout << "\t3. Ver el Promedio de Notas de los Examenes.                            " << endl;
		cout << "\t4. Ver Examen y sus Respuestas.                                         " << endl;
		cout << "\t5. Salir                                                                " << endl;
		cin >> opcion;
		system("cls");

		switch (opcion) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4': cout << "To be inputted" << endl; cin.get(); cin.ignore();  break;
			case '5': cout << "Salida del menu" << endl; cin.get(); cin.ignore(); break;
			default: cout << "El caracter introducido no es valido. Por favor introduzca un digito entre 0-5" << endl; cin.get(); cin.ignore();
		}
		system("cls");
	}
}