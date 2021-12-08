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

    
	return 0;
}
