#include<bits/stdc++.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
//solved
// meo meo 

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
        int a,b;
        char q,s;
        cin>>a>>q>>b;
        if(q=='>'&& a>b)
        {
                cout<<"Right"<<endl;
        } 
        else if(q=='<'&& a<b)
        {
                cout<<"Right"<<endl;
        } 
        
        else if(q=='=' && a==b)
        {
                cout<<"Right"<<endl;
        }
        else 
            cout<<"Wrong"<<endl; 
    }
}