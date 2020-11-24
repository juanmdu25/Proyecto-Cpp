#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void escribirArchivo(string &arch, int nLineas){

	char respuesta;
	string dato[30];

	ofstream archivo(arch);
	vector<string> lineas;

	for (int i = 0; i < nLineas; i++) {
		cout << "Introduzca el dato" << endl;
		cin >> dato[i];
		lineas.push_back(dato[i]);
	}
	for (string linea : lineas) {
		archivo << linea << endl;
	}

	archivo.close();
}

void leerArchivo(string &arch) {

	ifstream archivo(arch);
	vector<string> lineas;
	string ingresoDato;

	if (archivo.is_open()) {
		
		while (archivo >> ingresoDato) {
			lineas.push_back(ingresoDato);
		}

		for (string linea : lineas) {
			cout << linea << endl;
		}
	}
	else {
		cout << "Ocurrio un error. No se pudo abrir el archivo" << endl;
	}
	archivo.close();
}