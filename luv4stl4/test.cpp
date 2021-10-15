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

    // Monk and his candies
    //testcase, no. of bags, candies in each bag, time

    //Approach1: using sets
    long long t; cin>>t;
    while(t--)
    {
       long long n, k;
       cin>> n>>k;
       multiset<long long> bags;
       for(long long i=0; i< n; i++)
       {
           long long candy_ct;
           cin>>candy_ct;
           bags.insert(candy_ct);
       }
       long long total_candies = 0;
       for(long long i= 0; i< k; i++)
       {
           auto last_it = (--bags.end());
           long long candy_ct = *last_it;
           total_candies = total_candies + candy_ct;
           bags.erase(last_it);
           bags.insert(candy_ct/2);
       }
       cout << total_candies << endl;
    }

}
