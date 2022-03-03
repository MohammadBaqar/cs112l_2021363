#include<iostream>

using namespace std;

int main(){

    int a;

    int *p=new int[a];

    int *p1=new int[a];

cout<<"Enter the size of array please\n";

cin>>a;

cout<<"Enter the array please\n";

for(int i=0;i<a;i++){

    cin>>p[i];

}

for(int i=0;i<a;i++){

    if(p[i]>0){

        cout<<p[i]<<" ";
    }
    else {continue;}

}

for(int i=0;i<a;i++){

    if(p[i]<0){

        cout<<p[i]<<" ";}
        else {

            continue;
        }
    
}
delete[] p;
delete[] p1;

return 0;}