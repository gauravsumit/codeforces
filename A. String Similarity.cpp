#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000*1000*1000+7
int32_t main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int c1=0,c2=0;
        for(char i:s)
        {
            if(i=='0')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        string ans="";
        if(c1>c2)
        {
            for(int i=0;i<n;i++)
            {
                ans+='0';
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                ans+='1';
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}


////   2*n-1
//
//it ensures that any character must exist in abundance
//
//
//occ(1)  > oc(0)
//
//oc(0) > oc(1)
//
//
//
//oc(min to be in abundance)  == n
//
//c1 == n
//c2= n-1
//
//
//string of size n
//
//
//if we make a string of all c1's
//
//now i have a string of all 0's or 1's
//
//(n-1) + the other caha..
//
//n
//find charcter with higher occ

