#include <iostream>
#include <stdlib.h>
#include <string.h>
        using namespace std;
// incluimos las 3 librerias
int main(){
    char frase[60],rep[100],temporal[100];
	char pal;
	int longitud,z,j,inicial,acertado=0,temp=0,oportunidades=9;
	int repetido=0,gano=0;	
	cout<<" ===================Ahorcado================= \n\n";
	cout<<" INGRESA LA FRASE PARA ADIVINAR:   ";
		gets(frase);
		//PEDIMOS Y GUARDAMOS la frase
	    system ("cls"); //borar pantalla
	    
	    longitud=0;
	    inicial=0;
	    j=0;
	    //bajamos las variantes a 0
	    rep[0] = ' ';
	    rep[1] = '\0';
do{
	//punto de regraso
		system ("cls");//borar pantalla
		temp=0; //bajar a 0
		if(inicial == 0)
		{
		    for(z=0;z<strlen(frase);z++) //strlen devuelve el número de caracteres de una cadena, incluidos los espacios
		    {
		    	if(frase[z] == ' ')  
				{
				    temporal[z] = ' ';
				    longitud++;
				}
				else{
			     	temporal[z] = '_';
				    longitud++;
				}
			}
	    }
	    inicial = 1;
		temporal[longitud] = '\0';
		for(z=0;z<strlen(rep);z++)
				{
			if(rep[z] == pal)
			{
				repetido = 1;
		        break;
			}
			else
		    {
	    	  repetido = 0;
		  }
		}
		if(repetido == 0)
		{
			for(z=0;z<strlen(frase);z++)                  
			{
				if(frase[z] == pal)
				{
				temporal[z] = pal;
		     	acertado++;
			    temp=1;
				}
			}              
		}
		if(repetido == 0)                                
	    {
		if(temp == 0)
		{
		oportunidades = oportunidades -1;
		}
		
	    }
	else
	{
		cout<<" YA SE HA INTRODUCIDO ESE CARACTER O LETRA ";
        cout<<"\n\n";
	}
		cout<<"\n";
		for(z=0;z<strlen(temporal);z++)                          
		{
			cout<<temporal[z];
		}
		cout<<"\n";
		if(strcmp(frase,temporal) == 0)               
		{
			gano = 1;
			break;
			}
		  cout<<"\n LETRAS ACERTADAS: "<<acertado;                     
		  cout<<"\n OPORTUNIDADES RESTANTES: "<<oportunidades;
		  cout<<"\n";
		  rep[j] = pal;
		  j++;
		  if (oportunidades==0)
		  {
		  	break;
		  }
		  cout<<"INTRODUCE UNA LETRA: ";
		  cin>>pal;	 
	cout<< "   -----|"<<endl;
	cout<< "   |    |"<<endl;
    cout<< "   0    |"<<endl;
    cout<< "  /|l   |"<<endl;
    cout<< "  / L   |"<<endl;
    cout<< "       S|S"<<endl;
	system ("PAUSE");  
	}
		while(oportunidades != 0);
	if(gano)
	{
		cout<<"\n\n EN HORA BUENA ERES EL MAS PERRON AQUI";
	}
	else
	{
		cout<<"\n\n LO SIENTO HERMANO HAS PERDIDO YOU LOSER";
	}
	cout<<"\n\n";
	cin.get();
	return 0;
    }		
