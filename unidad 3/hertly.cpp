#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#define MAX 4
#define MIN 0
    using namespace std;
    
    void retardo(){
	for(int z=0; z<11000; z++){
		for(int m=0; m<9000; m++){
		}
	}
}
int main()
{
system ("color f9");
int opcion_menu;
    cout << "\n	BIENVENIDOS A HEART.THLY" << endl;
    cout << "==============================================" << endl;
    cout << "1. Iniciar secion" << endl;
    cout << "2. Registrarse" << endl;
    cout << "3. Ingrersar como psicologo " << endl;
    cout << "4. Salir del Programa." << endl;
    cout << "----------------------------" << endl;
    cout << "Introduzca Opcion:  ";
cin >> opcion_menu;

switch(opcion_menu){
	case 1:
	system("cls");
		for(int z=0; z<20; z++){
		printf("\nCARGANDO..............\n");
		printf("[");
		for(int m=0; m<z; m++){
			printf("X");
		}
		printf("]");
		printf("\n"); 
		printf("CARGANDO..............\n");
		retardo();
		system("cls");
	}
	retardo();
	
	break;
	
	case 2: 
    system("cls");
	for(int z=0; z<20; z++){
		printf("\nCARGANDO..............\n");
		printf("[");
		for(int m=0; m<z; m++){
			printf("X");
		}
		printf("]");
		printf("\n"); 
		printf("CARGANDO..............\n");
		retardo();
		system("cls");
	}
	retardo();
	
	class Usuario {
public:
    string nombre, apellido, user;
    int edad;
    void mostrarPerfil() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};
    Usuario usuario;
    cout << "Ingrese el nombre:  ";
    getline(cin, usuario.nombre);
    cout << "Ingrese el apellido: ";
    getline(cin, usuario.apellido);
    cout << "Ingrese la edad: ";
    cin >> usuario.edad;
    cout << "Ingresa nombre de usuario: ";
    cin >> usuario.user;
    //cout << "Ingrese la edad: ";     DIRECCION
    //cin >> usuario.edad;
	
	break;
}

}

		












