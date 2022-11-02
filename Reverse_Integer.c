#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,x,y;
    cin>>n;
    int rem=0;
    if (n<0){
        n=n*(-1);
        x=n;
    
        while (n!=0){
            r=n%10;
            n=n/10;
            rem=rem*10+r;
        }
        cout<<(-1)*rem; 
    }
    else{
        y=n;
        int rem1=0;
        while (n!=0){
            r=n%10;
            n=n/10;
            rem1=rem1*10+r;
        }
        cout<<rem1;
        
    }
}