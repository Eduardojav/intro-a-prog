#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>
using namespace std;
void adv (int& a,int& b,int c[],int& media,int& coan,int& cobn){
    string d;
    cout<<"mayor que "<< media<<endl;
    cin>>d;
    if(d=="si"){
        a=((b-a)/2)+a;
        media=((b-a)/2)+a;
        coan++;}
    else{
        b-=(b-a)/2;
        media=((b-a)/2)+a;
        cobn++;}
}
int main() {
    int a=0,b=100,media=50,coan=0,cobn=0;
   int c[100];
   for(int i=0;i<100;i++){
    c[i]=i;}
   for(int i=0;i<7;i++){
        adv(a,b,c,media,coan,cobn);}
        if(cobn==7)
            cout<<0;
        else
            cout<<c[b];
return 0;}
