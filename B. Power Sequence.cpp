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
//    n=1
//    1 1
//    0
//    1 1
//    0
//    1 1
//    -ar[0]
//
//
//    n>1
//
//    a[0] ..... a[n]  -> 0
//    len ->multiples  len , -len ,2*len
//
//
//    3rd operation is reserve for converting everything to 0
//        1 2 3 4
//
//        2nd'final-> 4 8 12 16
//
//        ((n-1)*k + ar[i])%n ==0
//
//        ((n-1)*k)%n = -ar[i]%n
//
//        int v1=ar[i]%n;
//    int v2=n-v1;
//
//    (n-1)*(n-v2);
//
//    (n-1)*1   n*1 ->n-1
//
//    k=2
//    (n-1)*(2)  = 2*n-2 -> n-2
//
//    k=3
//         n-3
//
//    k=4
//            n-4
//
//
//    k=n-1
//
//            n- (n-1) =1
//
//
//        1st step 1el ->0
    
    
    
    int n;cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(n==1)
    {
        cout<<"1 1\n0\n";
        cout<<"1 1\n0\n";
        cout<<"1 1\n"<<-1*ar[0]<<"\n";
        return 0;
    }
    cout<<"1 1\n";
    cout<<-1*ar[0]<<"\n";
    ar[0]=0;
    cout<<2<<" "<<n<<"\n";
    for(int i=1;i<n;i++)
    {
        int v1=ar[i]%n;
        int v2=n-v1;
        ar[i]+=(n-1)*(n-v2);
        cout<<(n-1)*(n-v2)<<" ";
    }
    cout<<"\n";
    cout<<1<<" "<<n<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<-1*ar[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
