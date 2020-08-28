#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000*1000*1000+7
int32_t main() {
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int x;cin>>x;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            ans+='1';
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                if(i-x>=0)
                {
                    ans[i-x]='0';
                }
                if(i+x<s.size())
                {
                    ans[i+x]='0';
                }
            }
        }
        bool ok=true;
        for(int i=0;i<s.size();i++)
        {
            bool flag=false;
            if(i-x>=0 and ans[i-x]=='1')
            {
                flag=true;
            }
            if(i+x<s.size() and ans[i+x]=='1')
            {
                flag=true;
            }
            if(flag)
            {
                if(s[i]!='1')
                {
                    ok=false;
                    cout<<"-1\n";
                    break;
                }
            }
            else
            {
                if(s[i]!='0')
                {
                    ok=false;
                    cout<<"-1\n";
                    break;
                }
            }
        }
        if(ok)
        {
            cout<<ans<<"\n";
        }
    }
    return 0;
}



// ans = w  = string of all ones of size n

// string s=n
// for all i in 0,n-1
// s[i]==0      ->   w[i+x] =0 and w[i-x]=0


// lets reconstruct s
// produce s' from w
// if s==s'
// cout<<w;

// else
// -1;


// s =     1 0 1 1 1 0


// w =     1 1 1 0 1 1


//    s' = 1 0 1 1 1 0


// return w




// x=1
// s=       1  1   0

// w=       1  0   1


// s'=      0  1   0

// return -1;




