#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 +7;

int binMultiply( int a, int b)
{
    int ans =0;
    while(b){
        if(b&1){
            ans = (ans+a)%M;
        }
        a =( a + a)% M;
        b>>=1; 
    }
    return ans;
}

int binExp( int a, int b)
{
    int ans =1;
    while (b>0)
    {
        if(b&1) binMultiply(ans, a);
        a = binMultiply( a, a);
        b>>=1;
    }
    return ans;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<< binExp(2,4);


}
