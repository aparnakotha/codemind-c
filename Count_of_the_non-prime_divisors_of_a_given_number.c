#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d=0;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            int c=0;
            for(int j=1;j<=i;j++){
                if (i%j==0){
                    c+=1;
                }
            }
            if(c>2 or c==1) d+=1;
        }
    }
    cout<<d;
}