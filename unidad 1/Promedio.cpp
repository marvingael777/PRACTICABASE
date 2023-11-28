// incluir la libreria
#include<iostream>
/* utilizar todos los caracteres y funciones
de la libreria
*/
using namespace std;
// funcion principal
int main(){
	// declarar variable 
	int a,b,c,d,e,suma,promedio;
	cout<<"hola aqui te voy adar tu promedio"<<endl;
	cout<<"ingresa el primer promedio"<<endl;
	cin>>a;
	cout<<"ingresa el segundo promedio"<<endl;
	cin>>b;
	cout<<"ingresa el tercer promedio"<<endl;
	cin>>c;
	cout<<"ingresa el cuarto promedio"<<endl;
	cin>>d;
	cout<<"ingresa el quinto promedio"<<endl;
	cin>>e;
	promedio = (a+b+c+d+e)/5;
	cout<<"tu promedio general es es de:"<<promedio<<endl;
	if(promedio <=7){
		cout<<"tu calificacion es aprobatoria"<<endl;
		
	}
	else{
		cout<<"lo lamento tu promedio no es aprobado";
}
cout<<"gracias por preguntarme por tu promedio";
return 0;
}

