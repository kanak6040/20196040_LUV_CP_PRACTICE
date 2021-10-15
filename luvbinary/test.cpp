#include <bits/stdc++.h>
using namespace std;

float eps = 1e-6;
float power(float x, float n)
{
    float multi =1;
    for(int i=0; i< n; i++)
       multi = x*multi;
    return multi;
}
/* 
int lower_bound( vector<int> &v, int element)
{
    int lo=0, hi =v.size()-1;
    int mid;
    while( hi- lo  >1)
    {
        int mid = (hi + lo)/2;
        if( v[mid] < element) 
        {
            lo = mid +1;
        }
        else hi = mid;
    }
    if( v[hi] >= element) return hi;
    return -1;
}
int upper_bound( vector<int> &v, int element)
{
    int lo=0, hi =v.size()-1;
    int mid;
    while( hi- lo  >1)
    {
        int mid = (hi + lo)/2;
        if( v[mid] <= element) 
        {
            lo = mid +1;
        }
        else hi = mid;
    }
    if( v[lo] >= element) return lo;
    if( v[hi] >= element) return hi;
    return -1;
}

 */
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
/* 
    int n; 
    cin >> n;
    vector <int> v(n);
    for(int i=0; i < n; i++)
    {
        cin >> v[i];
    }
    int to_find; 
    cin >> to_find;
    int lo =0 , hi = n-1;
    int mid;

    while (hi -lo > 1)
    {
        int mid = (hi + lo) /2;
        if( v[mid] < to_find){
            lo = mid +1;
        }
        else{
            hi = mid;
        }
    }
    if( v[lo] == to_find)
    {
        cout<< lo +1 << endl;
    }
    else if( v[hi]== to_find)
    {
        cout << hi +1 << endl;
    }
    else{
        cout<< "Not found";
    }
    
 */
   /*  

    int n; cin >> n;
    vector <int> v(n);
    for( int i=0; i< n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for( auto value:v) cout<<value<<" ";
    cout<< endl;
    int element; cin >> element;
    int lb = lower_bound(v,element);
    cout << lb <<" " << v[lb]<<  endl;
    lb = upper_bound(v,element);
    cout << lb <<" " << v[lb]<<  endl;

 */

  float x; 
    cin >> x;
    float lo =1, hi=x, mid;
    float n; cin >> n;
    while( hi - lo > eps){
        mid = (hi + lo) / 2;
        if( power(mid, n) < x)  lo = mid;
        else hi = mid;   
    }
    cout << lo << endl;
    cout<< pow(x, 1/n);











}
