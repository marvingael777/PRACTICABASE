#include<iostream>
using namespace std;
int main (){
const int tamArreglo =5;
int numeros [tamArreglo];
for (int i=0; i< tamArreglo; i++){
cout<<"ingresa numero"<<i++<<":";
	cin>>numeros[i];
}
cout<<"el numero es:";
for(int i=0; i<tamArreglo; i++){
	cout<<numeros[i]<<"";
	
}
cout<<endl;
return 0;
}
