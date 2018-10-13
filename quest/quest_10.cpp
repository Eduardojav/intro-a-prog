#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void primo(long cant,vector<int> & primos){
	int a=0;
	primos.push_back(2);
	for (int i=2;i<=cant;i++){
		for (int j=0;j<primos.size();j++){
			if (i%primos[j]==0)
				a=a+1;
			if(a>1)
			break;
		}
		if (a<1){
		primos.push_back(i);}
		a=0;
	}
	/*for(int i=0;i<primos.size();i++){
	cout<<primos[i]<<" , ";}*/}
void decir(long cant,vector<int> &primos,int a=0,int gf=0){
	
	int c=sqrt(cant);
	primo(c,primos);
	for(int i=0;i<primos.size();i++)
		if ((cant%primos[i]==0)&&(cant!=primos[i])){
			a=2;
			if(a=2){
			cout<<"no es primo"<<endl;
			return;}
			}
	if (a!=2){
	cout<<"es primo"<<endl;
	return;}
	}

			

int main() {
	vector<int> primos;
	while (true){
	long cant;
	cin>>cant;
	decir(cant,primos);}
	return 0;
	
}
