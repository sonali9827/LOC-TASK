#include<iostream>
using namespace std ;
int main()
{
    int v=0,c=0;
    string a;
    cout<<"Enter the string : ";
    cin>>a;
    for(int i=0;i<a.length();i++){
        if((int(a[i])>=65 && int(a[i])<=90) || (int(a[i])>=97 && int(a[i])<=122)){
            if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U'){
                v++;
            }
            else{
                c++;
            }
        }
    }
    cout<<"The number of vowels in the string is : "<<v<<endl;
    cout<<"The number of consonants in the string is : "<<c;
    return 0;
}