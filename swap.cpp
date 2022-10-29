#include<iostream>
using namespace std;
int main()
{
    int first,second,temp;
    cout<<"enter a: ";
    cin>>first;
    cout<<"enter b: ";
    cin>>second;
    temp=first;
    first=second;
    second=temp;
    cout<<"a is"<<first<<endl;
    cout<<"b is"<<second<<endl;
     
}
