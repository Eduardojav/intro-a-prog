#include<iostream>
using namespace std;
// C o n v e r t i r de p u l g a d a s ( i n ) a cm y v i c e v e r s a
// s u f i j o s ’ i ’ o ’ c ’ i n d i c a n l a u ni da d
// c u a l q u i e r o t r o e s e r r o r
int main ( )
{
const double cmperinch = 2.54 ; // numero de cm en un i n
int length = 1 ; // l o n g i t u d
char unit = ' ' ; // e s p a c i o ( no es unidad )
cout<< "Por favor ingrese una longitud seguida de su unidad (coi) : \n" ;
cin >> length >> unit ;
// C o n t i n u a r a . . . . no se uwu
// C o n v e r t i r de p u l g a d a s ( i n ) a cm y v i c e v e r s a
// s u f i j o s ’ i ’ o ’ c ’ i n d i c a n l a u ni da d
// c u a l q u i e r o t r o e s e r r o r
// ( ∗ )
if ( unit == 'i' )
cout << length << " in == "<< cmperinch * length << "cm\n" ;
else if ( unit == 'c' )
cout << length << "cm == "
<< length / cmperinch << " in \n" ;
else
cout << "Lo siento , no conosco una unidad llamada  " << unit << " \ n" ;

}
