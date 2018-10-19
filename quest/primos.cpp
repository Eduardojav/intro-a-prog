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
	for(int i=0;i<primos.size();i++){
	cout<<primos[i]<<" , ";}}




int main() {
	vector<int> primos;
	while (true){
	long cant;
	cin>>cant;
	primo(cant,primos);
	primos.clear();}
	return 0;

}
