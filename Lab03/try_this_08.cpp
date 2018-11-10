#include <iostream>
#include <vector>
#include<stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inver(vector<int>& n,int m[]){
	int aux;
	int a=n.size();
	for(int i=0;i<(a/2);i++){
		m[i]=n[n.size()-i-1];
		m[n.size()-i-1]=n[i];
	}
}
void llenar(vector<int>& n){
	int k,tam;	
	cin>>tam;
	for (int i;i<tam;i++){
		cin>>k;
		n.push_back(k);}}
void imprimir(vector<int>&n){
	for (int i=0;i<n.size();i++){
		cout<<n[i]<<" ";		
}cout<<endl; }
void imprimir(int m[],int b){
	for (int i=0;i<b;i++){
		cout<<m[i]<<" ";		
}cout<<endl; }
int main(){
	vector<int>n;
	llenar(n);
	int m[n.size()];
	imprimir(n);
	inver(n,m);
	imprimir(m,n.size());
	return 0;
}


