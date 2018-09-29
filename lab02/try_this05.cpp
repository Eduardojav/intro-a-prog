#include<iostream>
using namespace std;
int square ( int x )
{
int c,d;
c=x;
d=c;
while (c>1){
    x=x+d;
    c--;
}
return x;
}
int main ( )
{
int i =0; // en pieza en cero
while ( i <100) {
cout << i << "\t " << square ( i ) << "\n" ;
++i ; // i n c r em e n t o
}
}
