#include<iostream>
using namespace std ;
int merge(int* p, int* q, int* r, int s, int t){
    for(int i=1;i<=s;i++){
        r[i]=p[i];
    }
    for(int j=1;j<=t;j++){
        r[s+j]=q[j];
    }
    int d[s+t];
    cout<<" After merging and reversing the reversed array is :";
    for(int i=1,j=s+t;i<=s+t,j>=1;i++,j--){
        d[i]=r[j];
    }
    for(int k=1;k<=s+t;k++){
        cout<<d[k]<<" ";
    }
    return 0;
}
int main()
{
    int m,n;
    cout<<"Enter the size of first array :";
    cin>>m;
    cout<<"Enter the size of second array :";
    cin>>n;
    int a[m],b[n],c[m+n];
    cout<<":Enter the elements of the first array :";
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of the second array :";
    for(int j=1;j<=n;j++){
        cin>>b[j];
    }
    merge(a,b,c,m,n);
    return 0;
}