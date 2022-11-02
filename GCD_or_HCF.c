#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=m;i>=1;i--){
        if (n%i==0 and m%i==0){
            cout<<i;
            break;
        }
    }
}