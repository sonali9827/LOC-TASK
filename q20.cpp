#include<iostream>
using namespace std ;
int main()
{
    int al=0,di=0,sc=0;
    string a;
    cout<<"Enter a string :";
    cin>>a;
    for(int i=0;i<a.length();i++){
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)){
            al++;
        }
        else if(a[i]>=48 && a[i]<=57){
            di++;
        }
        else{
            sc++;
        }
    }
    cout<<"Number of alphabets inn the string :"<<al<<endl;
    cout<<"Number of digits in the string :"<<di<<endl;
    cout<<"Number of special characters in the string :"<<sc<<endl;
    return 0;
}