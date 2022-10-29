#include<iostream>
using namespace std;
int main()
{
    char ch;
    bool isLowercaseVowel,isUppercaseVowel;
    cout<<"enter a alphabet: ";
    cin>>ch;
    /*isLowercaseVowel=(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    isUppercaseVowel=(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (isLowercaseVowel||isUppercaseVowel)*/
    if(!isalpha(ch))
    {
        cout<<"invalid";
    }
    else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout<<"its a vowel"<<endl;

    }
    else
    {
        cout<<"its a consonant"<<endl;
    }
    
return 0;


}
