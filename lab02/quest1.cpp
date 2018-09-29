#include<iostream>
#include<string.h>
#include <vector>
using namespace std;

int main(){
	//problema 1
	/*int  a;
	int b;
	do
	{
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;
	}
	while((char(a)!='#')&&(char(b)!='#'));
	return 0;
	}*/
	//problema 2 y 3
/*	int a;
	int b;
	do
	{
	cin>>a>>b;
	if(a<b)
	cout<<"es menor"<< a<<" "<<"es mayor"<<b<<endl;
	else	if(b<a)
	cout<<"es menor"<< b <<" "<<"es mayor"<<a<<endl;
	else
	cout<<son iguales"<< b <<" "<<a<<endl;
	}
	while((char(a)!='#')&&(char(b)!='#'));
	return 0;*/
	//problema 4
	/*	double a;
	double b;
	do
	{
	cin>>a>>b;
	if(a<b)
	cout<<"es menor"<< a<<" "<<"es mayor"<<b<<endl;
	else	if(b<a)
	cout<<"es menor"<< b <<" "<<"es mayor"<<a<<endl;
	else
	cout<<son iguales"<< b <<" "<<a<<endl;
	}
	while((char(a)!='#')&&(char(b)!='#'));
	return 0;*/
	//    problema 5
/*	double a;
	double b;
	do
	{
	cin>>a>>b;
	if  ((a-b)<=0.01)
		cout<<"son casi iguales"<< b <<" "<<a<<endl;
	else if(a<b)
	cout<<"es menor"<< a<<" "<<"es mayor"<<b<<endl;
	else if(b<a)
		cout<<"es menor"<< b <<" "<<"es mayor"<<a<<endl;
	else
		cout<<"son iguales"<< b <<" "<<a<<endl;
	}
	while((char(a)!='#')&&(char(b)!='#'));
	return 0;*/
	//problema 6
/*	int a,b,i;
	int min=0;
	int max=0;
	int c=0;
	int datos[20];
	do
	{
	if(c%2==0){
		cin>>a;
		datos[i]=a;}
	else{
		cin>>b;
		datos[i]=b;}
	++c;
	++i;
	for(int j; j<i;++j){
		if(datos[j]<min)
			min=datos[j];
		
		if(datos[j]>max)
			max=datos[j];}
	;
	cout<<min<<"es el menor"<<endl;
	cout<<max<<"es el mayor"<<endl;
	}
	while((char(a)!='#')&&(char(b)!='#'));
	return 0;
	
}*/
	double a,d;
	string b,f,g;
	double min;
	double max=0;
	int c=0;
	int datos[20];
	cin>>a>>b;
	min=a;
	g=b;
	g=b;
	do
	{
	if(c%2==0){
		cin>>a>>b;
		min=a;
		if (b=="ft"){
			d=a*30.48;
			if(d<min){
			g=b;
			min=a;}
			if(d>max){
			max=a;
			f=b;}
		}
		else if (b=="cm"){
			d=a;
			if(d<min){
			g=b;
			min=a;}
			if(d>max){
			max=a;
			f=b;}}
		
		else {
			d=a*100;
			if(d<min){
			g=b;
			min=a;}
			if(d>max){
			max=a;
			f=b;}}
	}
	
	else{
		cin>>a>>b;
		if (b=="ft"){
			d=a*30.48;
			if(d<min){
			g=b;
			min=a;}
			if(d>max){
			max=a;
			f=b;}}
		else if (b=="cm"){
			d=a;
			if(d<min){
			g=b;
			min=a;}
			if(d>max){
			max=a;
			f=b;}}
		else {
			d=a*100;
			if(d<min){
			g=b;
			min=a;}
			if(d>max){
			max=a;
			f=b;}}
		}

	++c;
	;
	cout<<min<<" "<<g<<" es el menor"<<endl;
	cout<<max<<" "<<f<<" es el mayor"<<endl;
		cin>>a>>b;
	}
	while((char(a)!='#'));
	return 0;
	
}
