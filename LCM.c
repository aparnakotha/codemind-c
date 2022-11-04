#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int t=2;
    int lcm=1;
    while (a!=0){
        if(a%t==0 and b%t==0){
            a=a/t;
            b=b/t;
            lcm=lcm*t;
        }
        else{
            t+=1;
            if (a<t or b<t){
                break;
            }
        }
    }
    cout<<lcm*a*b;
        
}