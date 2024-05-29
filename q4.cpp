#include<iostream>
using namespace std ;
int main()
{
    float a,b;
    char c;
    cout<<"Enter operator :";
    cin>>c;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second Number :";
    cin>>b;
    switch(c){
        case '+':{
            cout<<"The sum of the two numbers is :"<< a+b;break;
        }
        case '-':{
            cout<<"The difference of the two numbers is :"<< (a-b);break;
        }
        case '*':{
            cout<<"The multiplication of the two numbers is :"<< a*b;break;
        }
        case '/':{
            cout<<"The division of the two numbers is :"<< a/b;break;
        }
    }
    return 0;
}