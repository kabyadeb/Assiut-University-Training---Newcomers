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
        string s,sa;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]=='.')

            {
                
                int x=i;
                if(s[i+1]>'0')
                {
                    cout<< "float"<<" "<<sa<<" 0.";
                    for(int j=x+1;j<s.size();j++)
                    {
                        cout<<s[j];
                    }
                    cout<<endl;
                }
                else 
                {
                    cout<<"int"<<" "<<sa<<endl;
                }
                break;
                
            }
            else 
            {
                sa+=s[i];
            }
        }
    }
}