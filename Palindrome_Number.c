#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,r;
        cin>>a;
        int x=a;
        int rem=0;
        while(a!=0){
            r=a%10;
            a=a/10;
            rem=rem*10+r;
    
        }
        if(rem==x) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
}