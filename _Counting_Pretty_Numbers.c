#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m,r;
        cin>>n>>m;
        int c=0;
        for (int j=n;j<=m;j++){
            r=j%10;
            if(r==2 or r==3 or r==9){
                c+=1;
            
            }
        }
        cout<<c<<endl;
    }
    
}