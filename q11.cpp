#include<iostream>
using namespace std ;
int func(int* a,int n, int b){
    int count=0;
    for(int i=1;i<=n;i++){
        if(b == a[i]){
            count++;
        }
    }
    return count;
}
int main()
{
    int n,b;
    cout<<"Enter number of elements of the array :";
    cin>>n;
    int a[n];
    cout<<"Enter array elements :";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number for finding occurrences :";
    cin>>b;
    cout<<"The number of occurrence of "<<b<<" in the entered array is :"<<func(a, n, b);
    return 0;
}