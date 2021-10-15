#include <bits/stdc++.h>
using namespace std;

int gcd( int a, int b){
    if( a%b == 0) return b;
    return gcd( b, a%b);
}
int lcm(int a, int b){
    int x = gcd(a, b);
    return (a*b)/x ;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout << gcd(12, 4) << endl;
    cout << gcd(69, 71) << endl;   
    cout << lcm(12, 4) << endl;
    cout << lcm(69, 71) << endl;   
}
