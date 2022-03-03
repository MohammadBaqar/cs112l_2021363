#include <iostream>

using namespace std;

int main (){
    
    int a;

    cout<<"Enter the size of array please\n";

    cin>>a;

    int *p=new int[a];

 
    cout<<"Enter the array please\n";

    for(int i=0;i<a;i++){

        cin>>p[i];
    }

     int max=p[0],min=p[0],max1=p[0],min1=p[0];


    for(int i=0;i<a;i++){


        if(p[i]>max){

            max=p[i];

        }

        if(p[i]<min){

            min=p[i];

        }
    }
     
        for(int i=0;i<a;i++){

            if(p[i]>max1&&p[i]!=max){

                max1=p[i];
            }
            if(p[i]<min1&&p[i]!=min){

                min1=p[i];
            }
        }
        cout<<"second highest term is: "<<max1<<endl;

        cout<<"second lowest term is: "<<min1;

        delete [] p;



return 0;
}
