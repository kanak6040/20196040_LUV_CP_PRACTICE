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

    vector <int> v= {1,2,3,4,5,6,7,8,9,0};
    cout << &(v);
    cout<<"\n";

    vector <int> ::iterator it;
    for(it = v.begin(); it!= v.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<"\n";

    for(int value:v)
    {
        cout<<value;
    }
    cout<<"\n";
    
    for( auto it = v.begin(); it!= v.end(); it++)
        cout<<*it<<" ";
}
