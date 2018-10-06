#include<iostream>
#include<string.h>
#include <vector>
using namespace std;

int main(){
	double a;
	double b;
	do
	{
	cin>>a>>b;
	if  (((a-b)<=0.01)&&((b-a)<=0.01))
		cout<<"son casi iguales "<< b <<" "<<a<<endl;
	else if(a<b)
	cout<<"es menor "<< a<<" "<<"es mayor "<<b<<endl;
	else if(b<a)
		cout<<"es menor "<< b <<" "<<"es mayor "<<a<<endl;
	else
		cout<<"son iguales "<< b <<" "<<a<<endl;
	}
	while((char(a)!='#')&&(char(b)!='#'));
	return 0;
}
