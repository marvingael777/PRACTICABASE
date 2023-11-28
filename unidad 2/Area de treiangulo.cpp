#include<iostream>
using namespace std;

int main(){
	float lado1,lado2,lado3;
	string nombre;
	cout<<"¡Bienvenido! este programa te ayudara a saber que tipo de triangulo tienes basandose en las medidas de sus lados"<<endl;
	cout<<"¿Cual es tu nombre?"<<endl;
	cin>>nombre;
	cout<<"Inserta el primer lado del triangulo"<<endl;
	cin>>lado1;
	cout<<"Inserta el segundo lado del triangulo"<<endl;
    cin>>lado2;
	cout<<"Inserta el tercer lado del triangulo"<<endl;
	cin>>lado3;
	if(lado1==lado2 and lado2==lado3 and lado1==lado3){
		cout<<"tu triangulo es equilatero"<<endl;
	}
	else if(lado2==lado1 or lado2==lado3 or lado1==lado3){
		cout<<"tu triangulo es isosceles"<<endl;
	}
	else if(lado1 != lado2 and lado2 != lado3 and lado1 != lado3){
		cout<<"tu triangulo es escaleno"<<endl;
	}
	else{
		cout<<"tu no tienes un triangulo"<<endl;
	}
    cout<<"Gracias por usar este programa:"<<nombre;
    return 0;
}
