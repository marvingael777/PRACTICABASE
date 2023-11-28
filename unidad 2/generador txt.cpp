#include <iostream>
#include <fstream>
//Se utilizara una nueva libreria esta libreria se llama fstream
using namespace std;
class Usuario {
public:
    string nombre;
    string apellido;
    string usuario;
    string telefono;
    string correoelectronico;
    string calle;
    int edad;

void mostrarPerfil() {
    cout<<"NOMBRE"<<nombre<<endl;
	cout<<"APELLIDO"<<apellido<<endl;
	cout<<"USUARIO"<<usuario<<endl;
	cout<<"telefono"<<telefono<<endl;
	cout<<"correoelectronico"<<correoelectronico<<endl;
	cout<<"calle"<<calle<<endl;
	cout<<"calle"<<calle<<endl;
	cout<<"edad"<<edad<<endl;
	
    }
};

int main() {
    Usuario usuario;

    cout << "Ingrese el nombre: ";
    getline(cin, usuario.nombre);

    cout << "Ingrese el apellido: ";
    getline(cin, usuario.apellido);
    
    cout << "Ingrese el telefono: ";
    cin >> (cin, usuario.telefono);
    
     cout << "Ingrese su correo electronico: ";
    cin >> (cin, usuario.correoelectronico);
    
    cout << "Ingrese su calle: ";
    cin >> (cin, usuario.calle);
    

    cout << "Ingrese la edad: ";
    cin >> usuario.edad;

    
    cout << "\nPerfil del Usuario:\n";
    usuario.mostrarPerfil();


    ofstream archivo("perfil_usuario.txt");

    
    if (archivo.is_open()) {
        archivo << "Nombre: " << usuario.nombre << endl;
        archivo << "Apellido: " << usuario.apellido << endl;
        archivo << "Edad: " << usuario.edad << endl;
        archivo << "usuario: " << usuario.usuario << endl;
        archivo << "telefono:" << usuario.telefono << endl;
        archivo << "correoelectronico:"  << usuario.correoelectronico << endl;

        
        archivo.close();
       cout << "\nPerfil del usuario guardado en 'perfil_usuario.txt'.\n";
    } 
	else {
        cout << "Error al abrir el archivo.\n";
    }

    return 0;
}
