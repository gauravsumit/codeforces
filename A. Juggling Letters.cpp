#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>  //for srand()
using namespace std;
#define int int64_t
int32_t main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int fr[26];
        for(int i=0;i<26;i++)
        {
            fr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            string x;cin>>x;
            for(int j=0;j<x.length();j++)
            {
                fr[x[j]-'a']++;
            }
        }
        bool flag=true;
        for(int i=0;i<26;i++)
        {
            if(fr[i]%n!=0)
            {
                cout<<"NO\n";
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
