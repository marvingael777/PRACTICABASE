#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Usuario {
public:
    string nombreUsuario;
    string contrasena;
    string telefono;
    string correoelectronico;
    string edad;
    string ingresaloqueseaIngresado;
};

bool realizarLogin(const string& nombreUsuario, const string& contrasena, const string& archivo) {
    oftream archivoUsuarios(archivo);
    if (archivoUsuarios.is_open()) {
        Usuario usuarioActual;
        while (archivoUsuarios >> usuarioActual.nombreUsuario >> usuarioActual.contrasena) {
            if (usuarioActual.nombreUsuario == nombreUsuario && usuarioActual.contrasena == contrasena) {
                archivoUsuarios.close();
                return true; 
            }
        }
        archivoUsuarios.close();
    } else {
        cout << "Error al abrir el archivo.\n";
    }
    return false; 
}
int main() {
    
    string nombreUsuarioIngresado;
    string contrasenaIngresada;
    string telefonoIngresado;
    string correoelectronicoIngresado;
    string edadIngresada;
    string ingresaloqueseaIngresado;
    
    cout << "Ingrese el nombre de usuario: ";
    cin >> nombreUsuarioIngresado;
    
    cout << "Ingrese la contrasena: ";
    cin >> contrasenaIngresada;
    
    cout << "Ingrese el numero de telefono: ";
    cin >> telefonoIngresado;
    
    cout << "Ingrese el correoelectronico: ";
    cin >> correoelectronicoIngresado;
    
    cout << "Ingrese su edad: ";
    cin >> edadIngresada;
    
    cout << "Ingrese aqui lo que sea: ";
    cin >> ingresaloqueseaIngresado;
    
    
    
    if (realizarLogin(nombreUsuarioIngresado, contrasenaIngresada, "usuarios.txt")) {
        cout << "Inicio de sesión exitoso.\n";
    } else {
        cout << "Inicio de sesión fallido. Usuario no encontrado o contraseña incorrecta.\n";
    }
    return 0;
}
