#include<iostream>
using namespace std;
int square ( int x )
{
return x*x ;
}
int main ( )
{
int i =0; // em pieza en c e r o
while ( i <100) {
cout << i << "\t " << square ( i ) << "\n" ;
++i ; // i n c r em e n t o
}
}
