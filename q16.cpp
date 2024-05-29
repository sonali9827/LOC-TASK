#include<iostream>
using namespace std ;
int main()
{
    int n,max=0;
    cout<<"Enter number of elements in the array :";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements :";
    for(int i=1;i<+n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=n;j++){
        int c=0;
        for(int k=1;k<=n;k++){
            if(a[j]==a[k]){
                c++;
            }
        }
        if(c > max){
            max=a[j];
        }
    }
    cout<<"The maximum occurring integer in the array is : "<<max;
    return 0;
}