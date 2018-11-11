#include <iostream>
#include <vector>
#include<stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int planta[100000];
int vida[100000];
	int n,k,t,l,r,v,j=0;
	while(!cin.eof()){
		cin>>n>>k>>t;
	for(int i=0;i<n;i++){
		planta[i]=0;
		vida[i]=1;}
	while(k>0){
	cin>>l>>r;
	for(int i=0;i<n;i++){
		planta[i]-=1;
		if(i>=l&&i<=r)
		planta[i]=0;
		if(planta[i]==-t){
			vida[i]=0;
			j++;}}
	k--;}
	v=n-j;
	j=0;
	printf("%d",v);
	for(int i=0;i<n;i++){
		if(vida[i]==1)
			printf("%2d",i);}
	printf("\n");}}
