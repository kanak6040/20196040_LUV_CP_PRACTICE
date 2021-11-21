#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n, cows;
int positions[N];

bool canPlaceCows( int minDist){
    int lastPos = -1;
    int cows_ct = cows;
    for( int i =0 ; i < n ; i++){
        if( positions[i] - lastPos >= minDist || lastPos == -1){
            cows_ct--;
            lastPos = positions[i];
        }
        if(cows_ct== 0) break;
    }
    return cows_ct==0;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; 
    cin >> t;
    while(t--){
        cin >> n>> cows;
        for(int i =0; i < n; i++)
            cin >> positions[i];

        int lo =0, hi =1e9, mid;
        while( hi - lo > 1){
            int mid = ( lo + hi)/ 2;
            if(canPlaceCows(mid)) lo = mid;
            else hi =mid -1;
        }

        if(canPlaceCows(hi)) cout<<hi<<endl;
        else cout<<lo<< endl;
    }

    
}
