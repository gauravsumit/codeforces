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
#include<cstdlib>
using namespace std;
#define int int64_t
int32_t main()
{
    int n;cin>>n;
    int ar[n+10];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        ans+=(ar[i]-1);
    }
    sort(ar,ar+n);
    if(n==2)
    {
        ans=min(ans,ar[0]-1);
    }
    int c_value=2;
    bool flag=true;
    while(flag)
    {
        if(c_value>(int)1e6)
        {
            break;
        }
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(pow(c_value,i)>(int)1e12)
            {
                flag=false;
                break;
            }
            else
            {
                temp+=abs(pow(c_value,i)-ar[i]);
            }
        }
        if(flag)
        {
            ans=min(ans,temp);
        }
        c_value++;
    }
    cout<<ans<<"\n";
    return 0;
}
