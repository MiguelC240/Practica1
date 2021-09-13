#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h> 
using namespace std;

int arma, asesino, lugar;//Numeros random
int arma_u, asesino_u, lugar_u;//Usuario
char Jugadores_nombre[5][15]={"Messi","Neymar","Cristiano","Mbappe","Icardi"};
char Armas_nombre[5][20]={"Escopeta","Bat de baseball","Picahielo","Marro","Serrucho"};
char Lugares_nombre[5][20]={"Gradas","Vestidores","Cancha","Palco VIP","Escaleras"};

void Numeros_random();
void Menu_General();
void Menu_Armas();
void Menu_Personajes();
void Menu_Lugares();

void Informacion_General();

void Mensaje_Personaje_Culpable(int j);
void Mensaje_Armas(int j);
void Mensaje_Lugar(int j);

void Eleccion_Usuario();

int main()
{
	int Menu_opc;
    
    do{
    	system("cls");
    	int datos, numero;
    	cout<<"MENU PRINCIPAL\n\n\t1.-Iniciar juego\n\t2.-Salir del juego\n\nElige una de las opciones anteriores: ";
    	cin>>Menu_opc;
    	switch(Menu_opc)
    	{
    		case 1:
    			system("cls");
				Numeros_random();
				
				/*
				cout << "\n\n"<<arma;
				cout << "\n"<<asesino;
				cout << "\n"<<lugar;
				*/
				
				//cout <<"\n\n";
				//system("pause");
				
				Informacion_General();
				Menu_General();
				Eleccion_Usuario();
				
				cout<<"\n\n";
				break;
				
			case 2:
				system("cls");
				cout<<"Gracias por jugar, hasta luego\n\n";
				system("pause");
				break;
				
			default: cout<<"\nEsa opcion no existe\n\n";
				system("pause");
				break;
		}
	}while(Menu_opc!=2);
}

void Numeros_random()
{
	system("cls");	
	int tamano = 5;
	int Armas_random[tamano] = {0}, Personajes_random[tamano] = {0}, Lugares_random[tamano] = {0};
	int j = 0, Arma_random = 0, Personaje_random = 0, Lugar_random = 0;
	
//////////////////////Creacion de 5 casos/////////////////////////////////////////	
    srand(time(0));   
    for (int i=1; i<=tamano; i++ )
    {
    	Armas_random[i] = rand() % 5 + 1;    
		Personajes_random[i] = rand() % 5 + 1; 
		Lugares_random[i] = rand() % 5 + 1; 
	}
	/*
    for (int i=1; i<=tamano; i++ )
	{
    	cout <<" " <<Armas_random[i];
    }
    cout <<"\n";;
    for (int i=1; i<=tamano; i++ )
	{
    	cout <<" " <<Personajes_random[i];
    }
    cout <<"\n";
    for (int i=1; i<=tamano; i++ )
	{
    	cout <<" " <<Lugares_random[i];
    }*/
    
////////////////////Seleccion de 1 caso de los 5 posibles ///////////////////////
    j =  rand() % 5 + 1; 
   
	Arma_random = Armas_random[j]; 
	Personaje_random = Personajes_random[j]; 
	Lugar_random = Lugares_random[j]; 
    
	arma = Arma_random;
	asesino = Personaje_random;
	lugar = Lugar_random;
}

void Informacion_General()
{
	////////////////Mensaje inicial descripcion del juego (Historia)//////////////////////
	system("cls");
	cout<<"Este juego es acerca de un investigador, el cual trata de resolver el asesinato que se cometio en contra de un jugador profesional de futbol, este suceso ocurrio despues de un partido de futbol que se disputo, en este juego de futbol se invitaron a los mejores jugadores de diferentes clubes para disputar un partido de estrellas";
	cout<<"\n\nTras finalizar el partido, alguien cometio un asesinato dentro del estadio de futbol, nadie sabe donde fue, quien fue o con que arma fue. Es por eso que, es tu deber investigar los aspectos antes mencionados en el asesinato.";
	cout<<"\n\n";
	system("pause");
	
	system("cls");
	cout<<"Los jugadores sospechosos son:";
	cout<<"\n\tMessi\n\tNeymar\n\tCristiano\n\tMbappe\n\tIcardi";
	cout<<"\n\n";
	system("pause");
	
	system("cls");
	cout<<"Los lugares posibles donde fue el asesinato son: ";
	cout<<"\n\tGradas\n\tVestidores\n\tCancha\n\tPalco VIP\n\tEscaleras";
	cout<<"\n\n";
	system("pause");
	
	system("cls");
	cout<<"Las armas posibles que se utilizaron para cometer el asesinato pueden ser:  ";
	cout<<"\n\tEscopetas\n\tBat de baseball\n\tPicahielo\n\tMarro\n\tSerrucho";
	cout<<"\n\n";
	system("pause");
	
	system("cls");
	cout<<"Puedes consultar 5 veces la informacion de las secciones anteriores, una vez hechas las consultas, tendras que decidir quien fue el asesino, en donde occurrio el asesinato y con que arma lo hicieron.   ";
	cout<<"\n\Si logras dar con el asesino, ganaras, de lo contrario, perderas.\nGood luck!!!!";
	cout<<"\n\n";
	system("pause");
}

void Mensaje_Personaje_Culpable(int j)
{
	int i=j, num;
	if (i == asesino)
	{
		cout <<"\n"<< Jugadores_nombre[i-1] << " se le veia consternado debido a la situacion y estaba nervioso al momento de la interrogacion";
	}
	else
	{
		srand(time(0));   
	    num = rand() % 2 + 1;     

		if(num == 1)
		{
			cout <<"\n"<< Jugadores_nombre[i-1] << " dijo que estaba festejando el hecho de haber ganado, no dudo al momento de la interrogacion";
		}
		else
		{
			cout <<"\n"<< Jugadores_nombre[i-1] << " se le veia un poco consternado debido a la situacion, dudo un poco al momento de la interrogacion";
		}
	}	
}

void Mensaje_Armas(int j)
{
	int i=j, num;
	if (i == arma)
	{
		cout <<"\n"<< Armas_nombre[i-1] << " tenia huellas digitales, sangre y no se encontro en su area designada";
	}
	else
	{
		srand(time(0));   
	    num = rand() % 2 + 1;   
		  
		if(num == 1)
		{
			cout <<"\n"<< Armas_nombre[i-1] << " tenia huellas digitales, pero se encontro en su area designada";
		}
		else
		{
			cout <<"\n"<< Armas_nombre[i-1] << " estaba en su area designada y no mostraba indices de haber sido usada";
		}
	}	
}

void Mensaje_Lugar(int j)
{
	int i=j, num;
	if (i == lugar)
	{
		cout <<"\n"<< Lugares_nombre[i-1] << " estaba completamente desordenada y habia indice de pelea";
	}
	else
	{
		srand(time(0));   
	    num = rand() % 2 + 1;     

		if(num == 1)
		{
			cout <<"\n"<< Lugares_nombre[i-1] << " se encontaba en orden, pero no estaban todas las cosas en su lugar";
		}
		else
		{
			cout <<"\n"<< Lugares_nombre[i-1] << " se encontraba en orden y todas las cosas en su lugar";
		}
	}	
}

void Eleccion_Usuario()
{
	int j=0, i;
	system("cls");
	cout <<"Se terminaron las consultas, es hora de decidir\n\n";
	for(i=0; i<5; i++)
	{
		cout<<"\t"<<i+1 <<".- " <<Jugadores_nombre[i] << "\n";
	}
	cout <<"\n¿Quien es el asesino?: ";
	cin>>asesino_u;
	
	
	cout <<"\n\n";
	for(i=0; i<5; i++)
	{
		cout<<"\t"<<i+1 <<".- " <<Armas_nombre[i] << "\n";
	}
	cout <<"\n¿Que arma se utilizo en el asesinato?: ";
	cin>>arma_u;
	
	cout <<"\n\n";
	for(i=0; i<5; i++)
	{
		cout<<"\t"<<i+1 <<".- " <<Lugares_nombre[i] << "\n";
	}
	cout <<"\n¿En que lugar se sucito el asesinato?: ";
	cin>>lugar_u;
	
	cout<<"\n\n";
	system("pause");
	
	system("cls");
	if(asesino == asesino_u && arma ==arma_u && lugar == lugar_u)
	{
		cout <<"Has GANADO, ya que acertaste el asesino, el lugar y el arma";
		if(asesino == asesino_u)
		{
			cout <<"\n\n"<<Jugadores_nombre[asesino_u-1] <<" ERA el asesino";
		}
		if(arma ==arma_u)
		{
			cout <<"\n"<<Armas_nombre[arma_u-1] <<" ERA el arma que se utilizo para el asesinato";
		}
		if(lugar == lugar_u)
		{
			cout <<"\n"<<Lugares_nombre[lugar_u-1] <<" ERA el lugar correcto";
		}
	}
	else
	{
		cout <<"Has PERDIDO, ya que no acertaste todas las opciones";
		if(asesino == asesino_u)
		{
			cout <<"\n"<<Jugadores_nombre[asesino_u-1] <<" ERA el asesino";
		}
		else
		{
			cout <<"\n"<<Jugadores_nombre[asesino_u-1] <<" NO era el asesino";
		}
		
		if(arma ==arma_u)
		{
			cout <<"\n"<<Armas_nombre[arma_u-1] <<" ERA el arma que se utilizo para el asesinato";
		}
		else
		{
			cout <<"\n"<<Armas_nombre[arma_u-1] <<" NO era el arma que se utilizo para el asesinato";
		}
		if(lugar == lugar_u)
		{
			cout <<"\n"<<Lugares_nombre[lugar_u-1] <<" ERA el lugar correcto";
		}
		else
		{
			cout <<"\n"<<Lugares_nombre[lugar_u-1] <<" NO era el lugar correcto";
		}
	}
	
	cout<<"\n\n";
	system("pause");
}

void Menu_General()
{
	int Menu_opc, j=1;
	do
	{
		system("cls");
	    cout<<"MENU GENERAL\n\n\t1.-Armas\n\t2.-Personajes\n\t3.-Lugares\n\n¿Sobre que quieres saber?: ";
	    cin>>Menu_opc;
	    switch(Menu_opc)
	    {
	    	case 1: 
	    			system("cls");
	    			
	    			Menu_Armas();
	    			
	    			cout<<"\n\n";
					break;
					
			case 2: 
	    			system("cls");
	    			
					Menu_Personajes();
	    			
	    			cout<<"\n\n";
					break;
					
			case 3: 
	    			system("cls");
	    			
					Menu_Lugares();
	    			
	    			cout<<"\n\n";
					break;
	    	
	    	default: cout<<"\nEsa opcion no existe\n\n";
					 system("pause");
					 break;
		}
		j++;
		cout<<"\n\n";	
	}while(j<=5);
}

void Menu_Armas()
{
	system("cls");
	int Menu_Arma, i, j;
    cout<<"MENU ARMAS\n\n ";
	for(i=0; i<5; i++)
	{
		cout<<"\t"<<i+1 <<".- " <<Armas_nombre[i] << "\n";
	}
    cout<<"\n\n¿Sobre que arma quieres saber?: ";
	cin>>Menu_Arma;
    switch(Menu_Arma)
    {
    	case 1: 
    			j=1;
    			Mensaje_Armas(j);
    			cout<<"\n\n";
    			system("pause");
				break;
    	
    	case 2: 
    			j=2;
    			Mensaje_Armas(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
		case 3: 
    			j=3;
    			Mensaje_Armas(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
		case 4: 
    			j=4;
    			Mensaje_Armas(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
						
		case 5: 
    			j=5;
    			Mensaje_Armas(j);
    			cout<<"\n\n";
    			system("pause");
				break;
    	
    	default: cout<<"\nEsa opcion no existe\n\n";
				 system("pause");
				 break;
	}
}

void Menu_Personajes()
{
	system("cls");
	int Menu_Personaje, i, j;
    cout<<"MENU PERSONAJES\n\n";
    for(i=0; i<5; i++)
	{
		cout<<"\t"<<i+1 <<".- " <<Jugadores_nombre[i] << "\n";
	}
	cout<<"\n\n¿Sobre que personaje quieres saber?: ";
    cin>>Menu_Personaje;
    switch(Menu_Personaje)
    {
    	case 1: 
    			j = 1;
    			Mensaje_Personaje_Culpable(j);
    			cout<<"\n\n";
    			system("pause");
				break;
    	
    	case 2: 
    			j = 2;
    			Mensaje_Personaje_Culpable(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
		case 3: 
    			j = 3;
    			Mensaje_Personaje_Culpable(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
		case 4: 
				j = 4;
    			Mensaje_Personaje_Culpable(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
				
		case 5: 
    			j = 5;
    			Mensaje_Personaje_Culpable(j);
    			cout<<"\n\n";
    			system("pause");
				break;
    	
    	default: cout<<"\nEsa opcion no existe\n\n";
				 system("pause");
				 break;
	}
}

void Menu_Lugares()
{
	system("cls");
	int Menu_Lugar, i, j;
    cout<<"MENU LUGARES\n\n";
    for(i=0; i<5; i++)
	{
		cout<<"\t"<<i+1 <<".- " <<Lugares_nombre[i] << "\n";
	}
	cout<<"\n\n¿Sobre que lugar quieres saber?: ";
    cin>>Menu_Lugar;
    switch(Menu_Lugar)
    {
    	case 1: 
    			j=1;
    			Mensaje_Lugar(j);
    			cout<<"\n\n";
    			system("pause");
				break;
    	
    	case 2:     			
    			j=2;
    			Mensaje_Lugar(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
		case 3: 
				j=3;
    			Mensaje_Lugar(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
		case 4: 
    			j=4;
    			Mensaje_Lugar(j);
    			cout<<"\n\n";
    			system("pause");
				break;
				
				
		case 5: 
    			j=5;
    			Mensaje_Lugar(j);
    			
    			cout<<"\n\n";
    			system("pause");
				break;
    	
    	default: cout<<"\nEsa opcion no existe\n\n";
				 system("pause");
				 break;	
	}
}
