#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000*1000*1000+7
int ar[3010][3010];
int br[3010];
int32_t main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>br[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                ar[j][i]=ar[j][i-1];
            }
            ar[br[i]][i]++;
        }
        int inrange[n+10];
        int lastadded[n+10];
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int val=ar[i][n];
            if(val>=4)
            {
                int t1=val;
                for(int j=1;j<4;j++)
                {
                    t1*=(val-j);
                    t1/=(j+1);
                }
                ans+=t1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            int sum=0;
            for(int number=1;number<=n;number++)
            {
                inrange[number]=0;
                lastadded[number]=0;
            }
            for(int j=i+1;j<=n;j++)
            {
                if(br[j]!=br[i])
                {
                    inrange[br[j]]++;
                }
                if(inrange[br[j]]!=1)
                {
                    sum-=lastadded[br[j]];
                    sum+=inrange[br[j]]*(ar[br[j]][n]-ar[br[j]][j]);
                    lastadded[br[j]]=inrange[br[j]]*(ar[br[j]][n]-ar[br[j]][j]);
                }
                else
                {
                    sum+=inrange[br[j]]*(ar[br[j]][n]-ar[br[j]][i]-1);   
                    lastadded[br[j]]=ar[br[j]][n]-ar[br[j]][i]-1;
                }
                if(br[i]==br[j])
                {
                    ans+=sum;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}








// 1 2  2       2  1    1   1   2 2 

// int lastvalue[n]

// sum->4

// sum->  -4  ==0
// sum->inrangeval[2]*3 -> 6

// sum->-6=0
// sum-> 3*2==6
// ar[i]==ar[k]
//     ans+=sum;

// ans->6
// ans->6+6=12
// ans-> 12+6 =18

// sum-=6 =0
// sum+ = 4*1 =4

// sum-=4
// sum==5*0=0


// preposeecing

// prefix 2d

// i<j<k<l
// sum=0;
// ans==0
// loop for i 

// sum=0;
//          loop to find k -> i+1 - n
//             if(ar[i]!=ar[k])
//             {
//                 inrange[ar[k]]++;
//             }
//             if(inrange[ar[k]]!=1)
//             {

//             }
//             else
//             {
//                 sum+=inrange[ar[k]]*(prefix[ar[k]][n]-prefix[ar[k][i]]-1)
//             }



// ar[i]   =   ar[k]

// find all occ of all numbers in i-k  * find all occ of all numbers in k - n


// summition [occ of al in(i-k) * occ of al in (k-n )]

// ar[i]!=ar[j];

// ar[i]=ar[j]=ar[k]=ar[l]      -> nC4
