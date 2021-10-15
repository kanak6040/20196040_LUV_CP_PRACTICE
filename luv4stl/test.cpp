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

    pair<int, string> p;
    p = make_pair(2, "abc");
    p = {2, "abc"};
    pair<int, string>&p1 =p;
    p1.first = 3;
    /* cout<< p.first<< p.second; */

    int a[] = {1,2,3}, b[] = {2,3,4};
    pair<int, int> parray[3];
    parray[0] = {1,2};
    parray[1] = {2,3};
    parray[2] = {3,4};
    swap(parray[0], parray[2]);
    for(int i=0; i<3; i++)
    {
        cout<<parray[i].first<<" "<<parray[i].second<<endl;
    }
    cin>>parray[3].first>>parray[3].second;
    cout<<parray[3].first;
}
