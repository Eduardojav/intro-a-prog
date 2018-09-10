#include <iostream>
#include<string.h>
using namespace std;

void billeton(int a,int b=0,int c=0,int d=0, int e=0,int f=0,int g=0,int h=0){
int a1=a;
while (100<=a){
 	a=a-100;
 	b++;}
 while (50<=a){
 	a=a-50;
 	c++;}
 while (20<=a){
 	a=a-20;
 	d++;}
 while (10<=a){
 	a=a-10;
 	e++;}
 while (5<=a){
 	a=a-5;
 	f++;}
 while (2<=a){

 	a=a-2;
 	g++;}
 while (1<=a){

 	a=a-1;
 	h++;}
cout<<a1<<"\n"<<b<<" nota(s) de R$ 100,00\n"<<c<<" nota(s) de R$ 50,00\n"<<d<<" nota(s) de R$ 20,00\n"<<e<<" nota(s) de R$ 10,00\n"<<f<<" nota(s) de R$ 5,00\n"<<g<<" nota(s) de R$ 2,00\n"<<h<<" nota(s) de R$ 1,00\n";

}

int main() {
    double e;
cin>>e;
billeton(e);
return 0;
}
