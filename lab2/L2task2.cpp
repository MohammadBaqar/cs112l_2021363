#include <iostream>

#include<iomanip>

#include<cmath>

#include<bitset>

using namespace std;

#define fun(a,b)(a<<b)

int main(){
    int x,y,z;

    cout<<"Enter 1st no please\n";

    cin>>x;

    cout<<"Enter 2nd no please\n";

    cin>>y;

    z=fun(x,y);

    cout<<z;

    return 0;
}