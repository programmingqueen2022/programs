//To display all the factors of a given number
#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter a positive integer: ";
    cin>>num;
    cout<<"Factors of the number "<<num<<" are "<<endl;
    for(i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}
