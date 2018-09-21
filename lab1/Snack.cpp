#include<iostream>
#include<stdio.h>
using namespace std;
int main (){

  int d,e;
  double g;
  double b[]={4.00,4.50,5.00,2.00,1.50};
  cin>>d;cin>>e;
  g=b[d-1]*e;
  cout<<"Total: R$ ";
  printf("%.2f\n", g);

return 0;
}
