#include<iostream>
using namespace std ; 
int sorted(int* a, int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is : ";
    for(int k=1;k<=n;k++){
        cout<<a[k]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements of the array :";
    cin>>n;
    int a[n];
    cout<<"Enter array elements :";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sorted(a,n);
    return 0;
}