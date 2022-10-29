#include<iostream>
using namespace std;
int main()
{
    char c;
    bool isLowercaseVowel,isUppercaseVowel;
    cout<<"enter a alphabet: ";
    cin>>c;
    /*isLowercaseVowel=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel=(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel||isUppercaseVowel)*/
    if(!isalpha(c))
    {
        cout<<"invalid";
    }
    else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout<<"its a vowel"<<endl;

    }
    else
    {
        cout<<"its a consonant"<<endl;
    }
    
return 0;


}