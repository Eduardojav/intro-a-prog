#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

void mod(vector<string> &moda,int mx=1,int cont=0,int elemento=0){
	for(int i=0;i<moda.size()-1;i++){
        for(int j=i+1;j<moda.size();j++){
            if(moda[i]==moda[j]){
                cont++;}}
        if (cont>mx){
            mx=cont;
            elemento=i;}
        cont=0;}
    cout<<moda[elemento]<<endl;
            }
int main() {
	vector<string> moda;
    mod(moda);
	return 0;
}
