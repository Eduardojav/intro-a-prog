#include<iostream>
using namespace std;
int main ( )
{
int length = 20; // l i t e r a l d e l t i p o e n t e r o
int width = 4 0; // i n i c i a l i z a
int area = length * width ; // una m u l t i p l i c a c i o n
length = 99; // a s i g n a 99 a l e n g h t
{ int perimeter = ( length+width ) * 2 ;
} // suma l u e g o m u l t i p l i c a correcto
{ int perimeter = length *2+ width * 2;
}//correcto 
{ int perimeter = length+width / 2; 
}// suma wi d t h ∗2 a l e n g incorrecto
}
