#include<bits/stdc++.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
//solved
// meo meo 

using namespace std;
int main()
{
   int a[3],b[3];
   for(int i=0;i<3;i++)
   {
        cin>>a[i];
        b[i]=a[i];
   }
   sort(b,b+3);
   for(int i=0;i<3;i++)
   {
        cout<<b[i]<<endl;
   }
   cout<<endl;
   for(int i=0;i<3;i++)
   {
        cout<<a[i]<<endl;
   }

}