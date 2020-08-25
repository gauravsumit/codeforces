#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000*1000*1000+7
int32_t main() {
    int t;cin>>t;
    while(t--)
    {
        int p,f;cin>>p>>f;
        int cnt1,cnt2;cin>>cnt1>>cnt2;
        int s,w;cin>>s>>w;
        if(s>w)
        {
            swap(cnt1,cnt2);
            swap(s,w);
        }
        int ans=0;
        for(int i=0;i<=cnt1;i++)
        {
            int temp=0;
            if(i*s>p)
            {
                break;
            }
            int rem=min(cnt1-i,f/s);
            temp= i + rem;
            temp += min(cnt2,((int)(p-i*s)/w) + ((int)(f-rem*s)/w));
            ans=max(ans,temp);
        }
        cout<<ans<<"\n";
    }
    return 0;
}


//
//p=14 f=14
// sw=3 ax=5
//    6 10
//
//p -> 4 sw + 0ax
//
//f-> 2sw + 1ax
//
//total_number_of_element = 4+0+2+1 = 7
//
//p->3sw + 1ax
//f->3sw +1ax
//total+eleemt= 4+4= 8
//
//
/////
//
////s_wei= 2        maxswards_avil=cnt1 =100
////ax_wei= 10      maxaxes_avail=cnt2  = 100
////
////
////p = 20   |->10
////
////
////
////f=20     |-> 10            ||->20
////
