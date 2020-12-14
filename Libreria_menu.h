#ifndef DADOS2_H_INCLUDED
#define DADOS2_H_INCLUDED

#include <iostream>

using namespace std;

//PROTOTIPOS

void menu_preguntas();
void error();
void menu_examen();
void menu_agregar_examen();
void agregar_examen_msj(int opa);

//FUNCIONES

void menu_agregar_examen(){
 system("cls");
 cout<<"                               ****************************"<<endl;  
 cout<<"                               ******  EVALUACIONES  ******"<<endl;
 cout<<"                               ****************************"<<endl;
 cout<<" "<<endl;
 cout << " |------------------------------------------------------------------------------------------------|       " <<endl;	
 cout << " | 1. Agregar titulo.                   4. Asignar el valor del parcial.                          |       " <<endl;	
 cout << " | 2. Agregar instruccion.              5. Agregar preguntas.                                     |       " <<endl;	
 cout << " | 3. Asignar cantidad de pregunta.                                                               |       " <<endl;
 cout << " |                                                                                                |       " <<endl;
 cout << " | 6. Salir                                                                                       |       " <<endl;	
 cout << " |------------------------------------------------------------------------------------------------|       " <<endl;
}

void menu_examen(){
 system("cls");
 cout<<"                               ****************************"<<endl;  
 cout<<"                               ******  EVALUACIONES  ******"<<endl;
 cout<<"                               ****************************"<<endl;
 cout<<" "<<endl;
 cout << " |------------------------------------------------------------------------------------------------|       " <<endl;	
 cout << " | 1. Agregar una nueva evaluacion            3. Menu lista de preguntas   **En preceso**         |       " <<endl;	
 cout << " | 2. Ver/Editar la lista de evaluaciones     4. Eliminar una evaluacion                          |       " <<endl;	
 cout << " |                                                                                                |       " <<endl;
 cout << " | 5. Salir                                                                                       |       " <<endl;	
 cout << " |------------------------------------------------------------------------------------------------|       " <<endl;
}

void menu_preguntas(){
 system("cls");
 cout<<"                               ***************************"<<endl;  
 cout<<"                               *******   PREGUNTAS  ******"<<endl;
 cout<<"                               ***************************"<<endl;
 cout<<" "<<endl;
 cout << " |------------------------------------------------------------------------------------------------|       " <<endl;	
 cout << " | 1. Agregar una nueva pregunta            3. Eliminar una pregunta    **En preceso**            |       " <<endl;	
 cout << " | 2. Ver/Editar la lista de preguntas                                                            |       " <<endl;	
 cout << " |                                                                                                |       " <<endl;
 cout << " | 5. Salir                                                                                       |       " <<endl;	
 cout << " |------------------------------------------------------------------------------------------------|       " <<endl;
}

void error(){            // Despliega un mensaje de error
  system("cls");
  cout<<"ERROR: Opcion invalida"<<endl;
  cout<<"        ****Presione enter para continuar****"<<endl;
  cin.ignore();
  cin.get();
}

void agregar_examen_msj(int opa){
	switch (opa) 
	 {
 		case 1:{
 			 cout << "Ingrese el titulo del examen " <<endl; // otra funcion que muestre msj
   	         break;
		     }
		     
		case 2:{
		     cout << "Ingrese una descripcion o instruccion del examen  " << endl;
   		     break;
		     }
		case 3:{
			cout << "Ingrese la cantidad de preguntas del parcial " << endl;
			break;
		}
		
		case 4:{
			cout <<"Ingrese el valor porcentual del parcial"<<endl;
			break;
		}
		     
    case 5:{
      cout <<" **por definir **"<< endl;
       break;
	  }  		     
	
	} 
}

#endif
