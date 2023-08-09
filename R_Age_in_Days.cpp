#include<bits/stdc++.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
//solved
// meo meo 

using namespace std;
int main()
{
   int x;
   cin>>x;
   cout<<x/365<<" years"<<endl;
   x=x%365;
   cout<<x/30<<" months"<<endl;
   x=x%30;
   cout<<x<<" days"<<endl;

}