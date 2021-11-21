#include <bits/stdc++.h>
using namespace std;
const int N= 1e7+10;
long long int ar[N];

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n, m;
    cin>>n>>m;
    while(m--){
        int a, b,d;
        cin>>a>>b>>d;
        ar[a]+=d;
        ar[b]-=d;
    }
    for(long long i=1; i<=n; i++)
       ar[i]+=ar[i-1];
    cout<<*max_element(ar, ar+N);
}
