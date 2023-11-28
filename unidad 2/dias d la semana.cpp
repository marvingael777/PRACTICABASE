#include <iostream>
using namespace std;

int main(){
	int z;
	cout<<"ingresa un número de dia";
	cin>>z;
	switch(z)
	{
		case 1:cout<<"El dia es lunes";
		break;
		case 2:cout<<"El dia es martes";
		break;
		case 3:cout<<"El dia es miercoles";
		break;
		case 4:cout<<"El dia es jueves";
		break;
		case 5:cout<<"El dia es viernes";
		break;
		case 6:cout<<"El dia es sabado";
		break;
		case 7:cout<<"El dia es domingo";
		break;
		default:cout<<"no existen mas dias de la semana";
	}
	return 0;
}
