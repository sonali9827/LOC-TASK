
#include <iostream>
using namespace std; 
int main() {
double a,b,c;
cout<<"enter angles of triangle: ";
cin>>a>>b>>c;
if(a+b+c==180)
{
if(a==60 && b==60 && c==60)
cout<<"triangle is equilateral";
else if(a==90 || b==90 || c==90)
cout<<"triangle is right angled";
else if(a==b || b==c || c==a)
cout<<"triangle is isosceles";
}
else
cout<<"triangle is invalid";
}