#include<iostream>
using namespace std;

bool isEven(int a)
{
    if (a%2==0)
    {
        return 1;
    }
    else
    {
       return 0;
    }
  }


int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    
   int t = isEven(num);
   cout<<"Your Number is: "<<t<<endl;
}
