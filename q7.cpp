#include <iostream>
using namespace std;
int main() {
double m1,m2,m3,m4,m5,t,a,p;
cout<<"enter marks of five subjects out of 100 :";
cin>>m1>>m2>>m3>>m4>>m5;
t=m1+m2+m3+m4+m5;
a=t/5;
p=(t/500)*100;
cout<<"Total marks :"<<t<<endl;
cout<<"average marks:"<<a<<endl;
cout<<"percentage :"<<p<<endl;
}