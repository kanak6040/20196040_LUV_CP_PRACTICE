#include <bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int hsh[N][26] = {0};
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
        for(int i=0; i< n; i++)
        {
            hsh[i+1][s[i]-'a']++; //one indexing for colums
        }
        for(int i=0; i< 26; i++)
        {
            for(int j=1; j<=n; j++)
            {
                hsh[j][i]+=hsh[j-1][i];
            }
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int oddCt = 0;
            for( int i =0 ; i<26; i++)
            {
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt %2 != 0 ) oddCt++;
            }
            if(oddCt >1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}
