#include<iostream>
using namespace std;
int main ( )
{
int a = 0 ;
int b = 0 ;
cout << "Por favor ingresedosenteros \n" ;
cin >> a >> b ;
if ( a<b ) // c o n d i c i o n
// S i l a c o n d i c i o n e s v e r d a d e r a :
cout << "max ( " << a << "" , "" << b <<" ) i s "<< b <<"\n" ;
else
// S i l a c o n d i c i o n e s f a l s a :
cout << "max ( " << a << "" , "" << b <<" ) i s "<< a << "\n" ;
}
