#include<iostream>
#include<string.h>
#include <vector>
#include<exception>
using namespace std;
void ganador(char a, char b, int& j, int& m){
    if(a==b){
        cout<<"empate "<<endl;
        cout<<j<<" "<<m<<endl;}
    else if(a=='t'){
        if(b=='r'){
            cout<<"perdio contra la rocaaa, su tijera es debil "<<endl;
            m++;
            cout<<j<<" "<<m<<endl;}
        else{
            cout<<"su tijera trozo a nuestro papel :'v"<<endl;
            j++;
             cout<<j<<" "<<m<<endl;}}
    else if(a=='p'){
        if(b=='t'){
            cout<<"perdio contra la lesbiana , su papel fue cortado "<<endl;
            m++;
            cout<<j<<" "<<m<<endl;}
        else{
            cout<<"su papel axfisio a la roca"<<endl;
            j++;
             cout<<j<<" "<<m<<endl;}}
   else {
        if(b=='p'){
            cout<<"perdio contra un papel, lamentable "<<endl;
            m++;
            cout<<j<<" "<<m<<endl;}
        else{
            cout<<"su metapod destrozo la tijera"<<endl;
            j++;
             cout<<j<<" "<<m<<endl;}}}

int main(){
    cout<<" r es papel"<<endl<<"p es papel"<<endl<<"t es tijera"<<endl;
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
        cont++;
        if((pju==3)||(pmaq==3))
            break;
    }
	return 0;

}
