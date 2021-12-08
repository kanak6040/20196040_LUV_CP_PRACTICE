#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int binexp( int a , int b , int m){
    int result =1;
    while( b > 0){
        if( b&1){
            result = (result*1LL*a)%m;
        }
        a = ( a* 1LL *a) % m;
        b>>=1;
    }
    return result;
}
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    const int N = 1e6+10  , M = 1e9+7;
    int fact[N];
    for( int i = 1; i <N;i++){
        fact[i] = (fact[i-1] *1LL * i) % M;
    }
// fermat's little theoreum
// a^-1 = (a^M-2)%M
// n! / ((n-k)! * r!)

    // int t; 
    // cin >> t;
    // while(t--){
    //     int n , k;
    //     cin >> n >> k;
    //     int ans = fact[n] ;
    //     int den = (fact[n-k] * 1LL *fact[k]) % M;
    //     ans = ans * binexp( den , M-2 , M);
    // }


// K symbols, N size Password, k >N
// k C N  = = k! / ((k-n)! * n!)

    // int t ; cin >> t;
    // while( t--){
    //     int n , k;
    //     cin >> n >> k;
    //     int ans = fact[N];
    //     ans = ( ans * 1LL * fact[k]) % M;
    //     int den =(fact[k-n] * 1LL *fact[n]) % M;
    //     ans  =  (ans * 1LL * binexp( den, M-2, M)) % M;
    //     cout << ans<<"\n";
    // }


    int multiples_ct[N], hsh[N];

    int n ; cin >> n;
    for( int i =0; i < n; i++){
        int x; cin >> x;
        hsh[x]++;
    }
    for( int i =1; i < N ; i++){
        for( int j =i ; j< N ; j+=i){
            multiples_ct[i] += hsh[j];
        }
    }
    int q; cin >>q;
    while( q--){ 
        int p, q;
        cin >> p >> q;
        long long lcm = p*1LL*q / __gcd(p,q);

        long ans = multiples_ct[p] + multiples_ct[q];
        if( lcm < N) ans-=multiples_ct[lcm];
        cout << ans<<"\n";
    }

	return 0;
}
