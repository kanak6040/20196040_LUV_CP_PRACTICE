#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
int n;
long long m;
long long trees[N];

bool isWoodSufficient(int h)
{
    long long wood;
    for(int i =0 ; i < n; i++)
    {
        if( trees[i] >= h)
            wood += (trees[i] - h) ;
    }
    return wood>=m;   // if(wood>= m ) return true; both statements are similar
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cin >>n >> m ;
    for ( int i =0; i< n; i++)
        cin >> trees[i];

    long long lo =0, hi = 1e9, mid;

    while( hi - lo > 1)
    {
        mid = (lo + hi ) / 2;
        if( isWoodSufficient(hi))  //we want maximum
            lo =mid;
        else if(isWoodSufficient(lo))
            hi = mid -1;
        else cout<< "-1"<< endl;
    }

}
