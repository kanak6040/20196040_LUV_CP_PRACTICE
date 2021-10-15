#include <bits/stdc++.h>
using namespace std;
const int N= 1e7+10;
long long int ar[N];
void printvector( vector <int> &v)
{
    
    for(int i =0; i<v.size() ; i++)
    { 
        cout<< v[i]<<" ";
        v[i]+=i;
    }
}


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
/* 
    vector <int> v;
    int i,n, x; cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    printvector(v);
    printvector(v);
 */
   //vector<pair<int, int>> v1 = {{1,2}, {2,3}, {3,4}};
    /* for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i].first<< " "<<v1[i].second<<endl;
    } */
    /* v1.push_back({12, 5});
    v1.push_back({0, 4});
    v1.push_back({16, 2});
    v1.push_back({1, 13});
    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i].first<< " "<<v1[i].second<<endl;
    } */

    int n1, n2, i, j, x; 
    cin>>n1;
    
    vector< vector< int>> v;
    for(i= 0; i< n1; i++)
    {
        vector<int> temp;
        cin>> n2;
        for(j=0; j< n2 ; j++)
        {
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(i= 0; i< v.size(); i++)
    {
        for( j =0; j< v[i].size();  j++)
            cout<< v[i][j]<< " ";
        cout<<"\n";
    }
 }
