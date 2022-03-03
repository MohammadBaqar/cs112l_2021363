#include<iostream>

#include<bitset>

#include<iomanip>

using namespace std;

#define run (int ,x) type n,cin>>x;

void binary (int u){

    bitset<16> x,y,z;

    cout<<setw(5)<<u<<": "<<endl;

    cout<<"this no is equivalent to :"<<bitset<16>((int)u)<<endl;

    x=bitset<16>((int)u);

    y=bitset<16>((int)u-1);

    z=x&y;

    if(z==0){

        cout<<"This is the power of 2\n";
    }

    else {

        cout<<"this is not the power of 2\n";
    }
  
}
using namespace std;

int main(){

    int n;

    cout<<"please enter the no \n";

    cin>>n;

    binary(n);

    system("PAUSE");

    return 0;
}