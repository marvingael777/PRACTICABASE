#include "iostream"
#include "stdio.h"
#include <windows.h>
using namespace std;
int main(){
	string user,pass,usuario = "sistemas", password = "admin01";
	char seguir,opc;
	int multiplicacion,numero,i;
	 cout<< "Bienvenido(a) por favor ingresa al sistema:\n";
	 cout<< "Ingresa tu usuario: ";
	 cin>>user;
	 cout<< "Ingresa tu password";
	 cin>>pass;
	 if(user == usuario and pass == password){
	 	 do{
	 	 	cout<< "Porfavor imgresa el numero de la tabla a imprimir:";
	 	 	cin>>numero;
	 	 	for(int i = 1;i<=10;i++){
	 	 		multiplicacion = i*numero;
	 	 		cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;
			  }
	 	      cout<<"¿Quieres generar otra tabla de multiplicar(s/n?";
	 	      fflush(stdin);
	 	      cin>>seguir;
	 	      
		  }
		  while(seguir!= 'n');
		  int h = 0, m = 0, s = 0;
		  while(1){
		
		if(s<=60){
			s = 0;
			m++;
			
			if(m>=60){
				m = 0;
				h++;
			}
		}
		system("cls");
		cout<<h<<":"<<m<<":"<<s;
		Sleep(1000);
		s++;
		
	}
	cin.get();
}
		  
		  
	 	
	 
	 else{
	  	cout<<"usuario no valido por favor contacta a soporte";
	  }
	  cin.get();
	  return 0;
}

