#include <iostream>
using namespace std;
int main() {
    int y;
    cout<<"enter year:";
    cin>>y;
    if(y%4==0 || y%400==0)
 cout<<"entered year is a leap year";
 else
 cout<<"not a leap year";
}