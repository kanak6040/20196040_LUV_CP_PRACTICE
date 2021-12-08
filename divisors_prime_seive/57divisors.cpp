#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    int ct = 0, sum =0;
    for( int i = 1; i <= sqrt(n); i++){
        if( n%i == 0){
            if( n%i == n/i){
                ct++;
                sum+=i;
            }
            else if(n%i == 0){
                ct+=2;
                sum += i;
                sum+= n/i;
            }
            cout << i<<" " <<n/i<< endl;
        }
    }
    cout << ct << " "<< sum << endl;
}
