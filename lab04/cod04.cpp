#include <iostream>
#include "f.h"
using namespace std;

int g(int i)
{
    return f(i);
}
int main()
{
    return g(0);
}
int f(int n)
{
    return n;
}
