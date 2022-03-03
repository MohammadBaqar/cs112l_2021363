#include<iostream>

#include<bitset>

#include<iomanip>

#include<string>

#include<bits/stdc++.h>

using namespace std;

#define inputbase(a)int a;cout<< "please enter the base of the number system ";cin>>a;
#define check_base while(a!=2||a!=8||a!=10||a!=16){cout<<"invalid base please enter correct base(2,4,6,8)";cin>>x;)}
#define inputno(y,z)string y,z;cout<<"Please enter the 1st no: ";cin>>y;cout<<"please enter the 2nd";cin>>z;



string addbinary(string a, string b){

   string result = "";
   
   int temp = 0;
   
   int size_a = a.size() - 1;
   
   int size_b = b.size() - 1;
   
   while (size_a >= 0 || size_b >= 0 || temp == 1){
   
      temp += ((size_a >= 0)? a[size_a] - '0': 0);
   
      temp += ((size_b >= 0)? b[size_b] - '0': 0);
   
      result = char(temp % 2 + '0') + result;
   
      temp /= 2;
   
      size_a--; size_b--;
   
   }
   
   return result;
}

class Addition8

{

	public: int decimalValue(char x)

	{

		return x - '0';

	}

	void addOctalNumber(string a, string b)

	{

		int n = a.length();

		int m = b.length();

		int i = n - 1;

		int j = m - 1;

		int temp = 0;

		int carry = 0;

		string result = "";

		while (i >= 0 || j >= 0)

		{

			if (i >= 0 && j >= 0)

			{

				temp = this->decimalValue(a[i]) + 

                  this->decimalValue(b[j]) + carry;

				i--;

				j--;

			}

			else if (i >= 0)

			{

				temp = this->decimalValue(a[i]) + carry;

				i--;

			}
			else

			{

				temp = this->decimalValue(b[j]) + carry;

				j--;

			}

			result = to_string((temp % 8))  +  result;

			carry = temp / 8;

		}

		if (carry != 0)

		{

			result = to_string(carry)  +  result;

		}

		cout << " A expression : " << a << endl;

		cout << " B expression : " << b << endl;

		cout << " Result of the numbers are  : " << result << endl;

	}

};




class Addition16

{

	public: int decimalValue(char x)

	{

		if (x == 'A' || x == 'a')

		{

			return 10;

		}

		if (x == 'B' || x == 'b')

		{

			return 11;

		}

		if (x == 'C' || x == 'c')

		{
			return 12;

		}

		if (x == 'D' || x == 'd')

		{

			return 13;

		}

		if (x == 'E' || x == 'e')

		{

			return 14;

		}

		if (x == 'F' || x == 'f')

		{

			return 15;

		}

		return x - '0';

	}


	void addHexadecimal(string a, string b)

	{

		int n = a.length();

		int m = b.length();

		int i = n - 1;

		int j = m - 1;

		int temp = 0;

		int carry = 0;

		string result = "";

		char hexaValue[] = {

			'0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , 

            '8' , '9' , 'A' , 'B' , 'C' , 'D' , 'E'

		};

		while (i >= 0 || j >= 0)

		{

			if (i >= 0 && j >= 0)

			{

				temp = this->decimalValue(a[i]) + 

                  this->decimalValue(b[j]) + carry;

				i--;

				j--;

			}

			else if (i >= 0)


			{

				temp = this->decimalValue(a[i]) + carry;

				i--;

			}

			else

			{

				temp = this->decimalValue(b[j]) + carry;


				j--;

			}

			result = (hexaValue[(temp % 16)])  +  result;

			carry = temp / 16;

		}

		if (carry != 0)

		{

			result = (hexaValue[carry])  +  result;
		}

		cout << " Given A : " << a << endl;

		cout << " Given B : " << b << endl;

		cout << " Result  : " << result << endl;

	}

};


int main(){

    int c,a,b;

    string y,z,p,q;

    Addition8 *task8 = new Addition8();

    Addition16 *task16 = new Addition16();

    cout<<"Enter the base of the system\n";

    cin>>c;
    while(c!=2&&c!=8&&c!=10&&c!=16&&c!=8){

    cout<<"invalid base !!Enter the base between (2,8,10,16)\n";
    cin>>c;

    }

    if(c==10){

        cout<<"Enter the first no please\n";

        cin>>a;

        cout<<"Enter the second no please\n";

        cin>>b;

    }
else{
    cout<<"Enter the first no please\n";

    cin>>y;

    cout<<"Enter the second no please\n";

    cin >>z;}

 
    switch(c){

        case 2:

        cout<<"sum in the binary base system is: "<<addbinary(y,z);
        break;


        case 8:
       
        task8->addOctalNumber(y,z );
        break;

        case 10:
        cout<<"The sum of two numbers is: "<<a+b;
        break;

        case 16:
        task16->addHexadecimal(y,z);
        break;

        default:
        break;
    }
 
    return 0;
   
}