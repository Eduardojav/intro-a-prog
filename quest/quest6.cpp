#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int cuadrado=1;
	int counter=0;
	unsigned long long arroz=1;
	cout<<arroz<<endl<<"cuadrado 1"<<endl;
	arroz=2;
	for(int i=2;i<65;i++){
		cuadrado=i;
		cout<<arroz<<endl<<"es el cuadrado "<<cuadrado<<endl;

		arroz=arroz*2;

		if ((arroz>=1000)&&(counter==0)){
			cout<<"ya son mas o igual a 1000 arroces"<<arroz<<endl;
			counter=1;}
		if ((arroz>=1000000)&&(counter==1)){
			cout<<"ya son mas o igual a 100000 arroces"<<arroz<<endl;
			counter=2;}
		if ((arroz>=1000000000)&&(counter==2)){
			cout<<"ya son mas o igual a 100000000 arroces"<<arroz<<endl;
			counter=3;}	}
	return 0;}
