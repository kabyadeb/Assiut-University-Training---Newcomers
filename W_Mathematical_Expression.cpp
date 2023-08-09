#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
   // cin>>test;
   // while(test--)
    {
        int a,b,c;
        char q,s;
        cin>>a>>q>>b>>s>>c;
        if(q=='+')
        {
            int x=a+b;
            if(x==c)
                cout<<"Yes"<<endl;
            else 
                cout<<x<<endl;
        } 
        else if(q=='-')
        {
            int x=a-b;
            if(x==c)
                cout<<"Yes"<<endl;
            else 
                cout<<x<<endl;
        } 
        
        else if(q=='*')
        {
            int x=a*b;
            if(x==c)
                cout<<"Yes"<<endl;
            else 
                cout<<x<<endl;
        } 
    }
}