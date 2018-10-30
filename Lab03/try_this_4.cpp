#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

void fact(double a,double b,double c){
    double d;
    try{
    d=(b*b)-(4*a*c);
    if(d<0)
        throw "no existe solucion en los reales";
    if(a==0)
        throw "No es una ecuacion cuadratica";
    double raiz1=sqrt(d);
    double sol1=(-b+raiz1)/(2*a);
    double sol2=(-b-raiz1)/(2*a);
    cout<<"x-"<<-sol1<<"=0"<<endl;
    cout<<"x-"<<-sol2<<"=0"<<endl;}
    catch(const char* ex){
    cout<<ex<<endl;}


        }
int main() {
    double c,b,a;
	cout<<"ingrese los coeficientes de la ecuacion cuadratica"<<endl;
	cin>>c>>b>>a;
    fact(c,b,a);
	return 0;
}
