#include<iostream>

using namespace std;

int main(){
	string user="marvin777";
	string password="queshow";
	string usuario,pass;
	cout<<"INGRESA TU USUARIO";
	getline(cin,usuario);
	cout<<"ingresa tu password";
	getline(cin,pass);
	if(usuario == user and pass == password){
		cout<<"BIENVENIDO";	
	}
	else{
		cout<<"QUE HACES AQUI";
	}
		
}

