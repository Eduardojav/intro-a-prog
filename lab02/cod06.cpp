#include<iostream>
using namespace std;
int main ( )
{
const double cmperinch = 2.54 ; //#cm p o r p ul ga da
int length = 1 ; // u ni da d de l o n g i t u d
char unit = 'a' ;
cout<< "Por favor ingrese una longitud y su unidad ( c o i ) : \n" ;
cin >> length >> unit ;
switch ( unit ) {
case 'i' :
cout << length << " in == "<< cmperinch * length << "cm\n" ;
break ;
case 'c' :
cout << length << " cm == "<< length / cmperinch << " in \n" ;
break ;
default :
cout << "Lo siento , no conosco esa unidad ’ "<<unit << " \ n" ;
break ;
}
}

