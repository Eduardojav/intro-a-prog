#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

int mod(vector<int> &moda,int mx=1,int cont=0,int elemento=0){
	for(int i=0;i<moda.size()-1;i++){
        for(int j=i+1;j<moda.size();j++){
            if(moda[i]==moda[j]){
                cont++;}}
        if (cont>mx){
            mx=cont;
            elemento=i;}
        cont=0;}
    for(int i=0;i<moda.size();i++){
    	cout<<moda[i]<<" ; ";}
    	cout<<endl;
    return moda[elemento];
            }
int main(){
	int tam;
	int c;
	vector<int> moda;
    srand(time(NULL));
	cin>>tam;
	for(int i=0;i<tam+1;i++){
		c=rand()%12 -1;
		moda.push_back(c);
	}
    c=mod(moda);
    cout<<c<<endl;
	return 0;
}
