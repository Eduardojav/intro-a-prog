#include<iostream>
#include<string.h>
#include <vector>
using namespace std;

int main(){
string temp ;
string words;
vector<string> cosas;
/*for(int i=0;i<5;++i){
	cin>>words;*/
cosas.push_back ("puto") ;
cosas.push_back ("vieja") ;
cosas.push_back ("shit") ;

while ( cin >>temp ){
	for ( int i =0;i<cosas.size ( ); ++i )
    	if(temp==cosas[i])
        	temp="pii";
    	cout<<" "<<temp<<" ";}
    return 0;
    }
