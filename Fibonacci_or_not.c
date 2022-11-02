#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c=0;
    if (n==a or n==b){
        cout<<"True";}
    else{
    while(c<n){
        c=a+b;
        a=b;
        b=c;
    }
    if(n==c) cout<<"True";
    else cout<<"False";
    }
    
}