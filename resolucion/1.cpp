#include<iostream>
#include<string.h>
#include <vector>
#include<exception>
using namespace std;
int trifuerza(char a,char b){
	if((a=='r')&&(b=='p')){
		cout<<"la maquina gano : roca vs papel"<<endl;
		return 2;}
	else if((a=='r')&&(b=='t')){
		cout<<"Usted gano : roca vs tijera"<<endl;
		return 1;}
	else if((a=='p')&&(b=='r')){

		cout<<"Usted gano : papel vs roca "<<endl;
		return 1;}
	else if((a=='p')&&(b=='t')){
		cout<<"la maquina gano : papel vs tijera"<<endl;
		return 2;}	
	else if((a=='t')&&(b=='p')){
		cout<<"usted gano : tijera vs papel"<<endl;
		return 1;}
	else {cout<<"la maquina gano gano : tijera vs roca"<<endl;
		return 2;	}		}
void epaa(char a){
	if(a=='r')
	cout<<"empate roca vs roca"<<endl;
	else if(a=='p')
	cout<<"empate papel vs papel"<<endl;
	else
	cout<<"empate tijera vs tijera"<<endl;}
void ganador(char a, char b, int& j, int& m){
	int d;
    if(a==b){
        epaa(a);
        cout<<j<<" "<<m<<endl;
		return;}
   	d=trifuerza(a,b);
	if(d==1) j++;
	else m++;
	 cout<<"jugador "<<j<<"----Maquina"<<" "<<m<<endl;}
int main(){
    cout<<" r es roca"<<endl<<"p es papel"<<endl<<"t es tijera"<<endl;
    char jugador;
    int cont=0,a=0,b=0;
    int &pju =a ;
    int &pmaq =b;
    char maquina[100]={'t','p','p','r','r','p','r','t','t','r'};
    while(cin>>jugador){
        try{
        if((jugador!='p')&&(jugador!='r')&&(jugador!='t'))
        throw "seleccion invalida";
        ganador(jugador,maquina[cont],pju,pmaq);}
        catch(const char* ex){
        cout<<ex<<endl;}
        if(cont==9){
        	cont=0;
		}
        cont++;
        if((pju==3)||(pmaq==3))
            break;
    }
	return 0;

}
