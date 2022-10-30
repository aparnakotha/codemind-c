#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    float s;
    float x;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<fixed<<setprecision(2)<<x;
}