#include <iostream>
#include<stdio.h>
#include <string>
#include<windows.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		char accion;
		float Moneda;
		float conversion;
		do{
		
		cout<<"presione U para convertir de Yuanes\n"<<"presione S para convertir Sequéls\n"<<"presione L para convertir Libras\n"<<"presione E para convertir Euros\n"<<"presione Y para convertir Yenes\n"<<"presione D conversion de dollares a monedas "<<endl;
		cin>>accion;}
		while ((accion!='U') &&(accion!='S') &&(accion!='L') &&(accion!='E') &&(accion!='D') &&(accion!='Y'));
		switch( accion){
			case('U'):
				cout<<"cuantos Yuanes desea convertir"<<endl;
				cin>>Moneda;
				conversion=(Moneda*0.15);
				cout<<"Sus "<<Moneda<<" Yuanes, tenga cuidado quizas lee soles >:v, valen";
				printf("%.4f ",conversion);
				cout<<" Dolares "<<endl;
				break;
			case('S'):
				cout<<"cuantos Sequéls desea convertir"<<endl;
				cin>>Moneda;
				conversion=(Moneda*0.28);
				cout<<"Sus "<<Moneda<<" Sequéls,Sequéls ,Sequéls ,Sequéls ,Sequéls ,Sequéls Sequéls , una mas Sequéls , para que sepa que son Sequéls >:v valen ";
				printf("%.4f ",conversion);
				cout<<" Dolares "<<endl;
				break;
			case('L'):
				cout<<"cuantos Libras desea convertir"<<endl;
				cin>>Moneda;
				conversion=(Moneda*1.31);
				cout<<"Sus "<<Moneda<<" Pinche britanico que se ira a america tus libras son ";
				printf("%.4f ",conversion);
				cout<<" Dolares "<<endl;
				break;
			case('E'):
				cout<<"cuantos Euros desea convertir"<<endl;
				cin>>Moneda;
				conversion=(Moneda*1.18);
				cout<<"Sus "<<Moneda<<" alto ahi tio a todo gas tus euros son ";
				printf("%.4f ",conversion);
				cout<<" Dolares "<<endl;
				break;
			case('Y'):
				cout<<"cuantos Yenes desea convertir"<<endl;
				cin>>Moneda;
				conversion=(Moneda*0.0089);
				cout<<"Sus "<<Moneda<<" arigatoooo gosamaidasasdasdasdasd tus yenes son  ";
				printf("%.4f ",conversion);
				cout<<" Dolares "<<endl;
				break;
			default:
				system("cls");
				cout<<"presione U para convertir a Yuanes\n"<<"presione S para convertir a Sequéls\n"<<"presione L para convertir a Libras\n"<<"presione E para convertir a Euros\n"<<"presione Y para convertir a Yenes\n"<<endl;
				cin>>accion;
				switch(accion){	
				case('U'):
					system("cls");
					cout<<"cuantos dolares desea convertir"<<endl;
					cin>>Moneda;
					conversion=(Moneda*6.86);
					cout<<"Sus "<<Moneda<<" dolares ojooo dolars no se vaya a equivocar ehhh!!!!!! valen ";
					printf("%.4f ",conversion);
					cout<<" Yuanes "<<endl;
					break;
				case('S'):
					system("cls");
					cout<<"cuantos dolares desea convertir"<<endl;
					cin>>Moneda;
					conversion=(Moneda*3.57);
					cout<<"Sus "<<Moneda<<" dolares ojooo dolares no lo engañen y piense que selecciono pesos venezolanos ";
					printf("%.4f ",conversion);
					cout<<" Sequéls "<<endl;
					break;
				case('L'):
					system("cls");
					cout<<"cuantos dolares desea convertir"<<endl;
					cin>>Moneda;
					conversion=(Moneda*0.76);
					cout<<"Sus "<<Moneda<<" vaya a tomar te con sus dolares que son ";
					printf("%.4f ",conversion);
					cout<<" Libras "<<endl;
					break;
				case('E'):
					system("cls");
					cout<<"cuantos dolares desea convertir"<<endl;
					cin>>Moneda;
					conversion=(Moneda*0.85 );
					cout<<"Sus "<<Moneda<<" Madreee miaa willyyy sus dolares valen  ";
					printf("%.4f ",conversion);
					cout<<" Euros "<<endl;
					break;
				case('Y'):
					system("cls");
					cout<<"cuantos dolares desea convertir"<<endl;
					cin>>Moneda;
					conversion=(Moneda*112.57 );
					cout<<"Sus "<<Moneda<<" Ya me aburri de escribir tus dolares valen ";
					printf("%.4f ",conversion);
					cout<<" Yenes "<<endl;
					break;
				default:
					cout<<" GG para que escribe mal en la segunda fase, reinicie el programa :U, por burro"<<endl;
					break;
				break;}}
