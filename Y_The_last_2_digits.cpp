//noob_code 
//solved
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    {
        long long a,b,c,d,xa,xb;
        cin>>a>>b>>c>>d;
        a=a%100;
        b=b%100;
        c=c%100;
        d=d%100;
         if(((a*b*c*d)%100)<10)
         cout<<"0"<<(a*b*c*d)%100<<endl;
         else cout<<(a*b*c*d)%100<<endl;
        
    }
}