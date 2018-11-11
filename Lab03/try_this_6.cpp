#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;
int  toros(int a [4],int b[4] ){
	int toros=0;
	int vacas=0;
	for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
	if((a[i]==b[j])&&(i==j))
		toros++;
	if(a[i]==b[j]&&a[i]!=b[i])
		vacas++;
	}}
	}
	cout<<endl;
	cout<<"hay "<<toros<<"toros"<<endl;
	cout<<"hay "<<vacas<<"vacas"<<endl;
	return toros;
}
bool revisar(int b,int a[]){
	for(int i=0;i<4;i++){
		if(b==a[i]){
			return true;}}
	return false;
}
void trifuerza(int a[]){
	srand(time(NULL));
	int b=rand()%10;
	int c=0;
	bool g=true;
	for(int j=0;j<4;j++){
		while(g){
			g=revisar(b,a);
			if(g)
			b=rand()%10;}
		g=true;
		a[j]=b;}
	for(int j=0;j<4;j++){
		cout<<a[j];}
		cout<<endl;}
int main(){
	int a[4];
	int b[4];
	int cont;
	bool error=true;
	string life;
	trifuerza(a);
	int totos;
	bool jugar=true;
	try {
	while(jugar){
	do {
	for(int i=0;i<4;i++){
		cin>>b[i];
		cout<<b[i];
		for(int j=0;j<10;j++){
            if(b[i]==j)
                error=false;}
		if(error)
            throw "lo que ingreso no es un digito con valor numerico";
        error=true;}
        totos=toros(a,b);}
	while(totos!=4);
	cout<<"desea jugar nuevamente? \n Si/No";
	cin>>life;
	if(life=="No")
		jugar=false;
	trifuerza(a);}}

    catch(const char* exp){
    cout<<exp;}
    return 0;}
