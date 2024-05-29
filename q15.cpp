#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter the number of elements of the array :";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the elements of the first array :";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=n;j++){
        b[j] = a[j];
    }
    cout<<"After copying the elements of the first array to second array the second array elements are :";
    for(int k=1;k<=n;k++){
        cout<<b[k]<<" ";
    }
    return 0;
}