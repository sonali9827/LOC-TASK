#include<iostream>
using namespace std ;
int main()
{
    int n,c=0;
    cout<<"Enter number of elements of the array :";
    cin>>n;
    int a[n],b[n],ind=1;
    cout<<"Enter the array elements :";
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i] < 0){
            c++;
        }
    }
    for(int j=1;j<=n;j++){
        if(a[j]<0){
            b[ind++]=a[j];
        }
    }
    for(int k=1;k<=n;k++){
        if(a[k]>=0){
            b[ind++]=a[k];
        }
    }
    cout<<"After moving the negative elements to one side the new array is :";
    for(int m=1;m<=n;m++){
        cout<<b[m]<<" ";
    }
    return 0;
}