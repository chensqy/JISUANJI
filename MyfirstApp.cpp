/*
  Fuck CSDN
  Fuck Code
  Fuck Java
  Fuck C++
  Fuck Copyright
  Fuck Everything
  Copyright By ChenSqy 2025.Use Apache 2.0
*/
#include <iostream>
using namespace std;

int main()
{
    int check;
    long long thefirstnumber;
    long long thelastnumber;
    cout<<"1.+"<<endl;
    cout<<"2.-"<<endl;
    cout<<"3.*"<<endl;
    cout<<"4./"<<endl;
    cout<<"5.%"<<endl;
    cout<<"Please Enter algorithm:"<<endl;
    cin>>check;
    cout<<"Please enter the number 1:"<<endl;
    cin>>thefirstnumber;
    cout<<"Please enter the number 2:"<<endl;
    cin>>thelastnumber;
    if(check==1)
    {
        cout<<"The results were:";
        cout<<thefirstnumber+thelastnumber<<endl;
    }
    if(check==2)
    {
        cout<<"The results were:";
        cout<<thefirstnumber-thelastnumber<<endl;
    }
    if(check==3)
    {
        cout<<"The results were:";
        cout<<thefirstnumber*thelastnumber<<endl;
    }
    if(check==4)
    {
        cout<<"The results were:";
        cout<<thefirstnumber/thelastnumber<<endl;
    }
    if(check==5)
    {
        cout<<"The results were:";
        cout<<thefirstnumber%thelastnumber<<endl;
    }
    else
    {
        cout<<"Please Check again Your Enter"<<endl;
    }
    cout<<"Copyright By ChenSqy 2025.Use Apache 2.0"<<endl;
    return 0;
}