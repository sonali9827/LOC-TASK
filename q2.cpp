#include<iostream>
using namespace std ;
int main()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;
    if(a == 0){
        cout<<"The entered number is Zero.";
    }
    else if(a > 0){
        cout<<"The entered number is a Positive Number.";
    }
    else{
        cout<<"The entered number is a Negative Number.";
    }
    return 0;
}