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
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ar[n+10];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        sort(ar,ar+n);
        sum-=ar[n-1];
        if(sum>=ar[n-1] and (sum + ar[n-1])%2==0)
        {
            cout<<"HL\n";
        }
        else
        {
            cout<<"T\n";
        }
    }
    return 0;
}



//
//lasrgest element is ar  > totalsum -lasrgest element
//
//
//110  10 10 10
//110 > 30
//
//
//10 10 10   total sum is even or odd
//9  10 10
//9 9 10
//8 9 10
//8 9 9
//
//0 5 5
//
//
//
//
//HL
//
//10 10 9  total sum odd
//T
