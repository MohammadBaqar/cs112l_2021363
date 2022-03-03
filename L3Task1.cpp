#include <iostream>

using namespace std;

int main(){

    int i;

    cout<<"Enter the size of array please\n";

    cin>>i;

    int *p=new int[i],*p1=new int [i-1];

    cout<<"Enter the elements of array please\n";

    for(int j=0;j<i;j++){

        cin>>p[j];
    }

    for(int j=0;j<i-1;j++){

        p1[j]=p[j+1]-p[j];

    }

    delete [] p;

    for(int j=0;j<i-1;j++){

        cout<<p1[j]<<" ";
    }

    return 0;
}