#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            c+=1;
        }
    }
    if (c==1) cout<<"prime";
    else cout<<"not a prime";
}
    