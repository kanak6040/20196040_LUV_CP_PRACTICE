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
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, q;
        cin >> n>> q;
        string s;
        cin >>s;
        while(q--)
        {
            long long int l, r;
            cin>> l>> r;
            int hsh[26];
            for(int i=0; i< 26; i++)
            {
                hsh[i]=0;
            }
            l--; r--;
            for(long long int i=l; i<=r; i++)
            {
                hsh[s[i]- 'a']++;
            }
            int oddCt = 0;
            for(int i=0; i<26; i++)
            {
                if(hsh[i]%2 != 0) oddCt++;
            }
            if(oddCt >1) cout<<"NO\n";
            else cout<<"YES\n";
        }

    }
}
