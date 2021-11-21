#include <bits/stdc++.h>
using namespace std;
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

   /*  int n; 
    cin >> n;
    int a[n];
    for( int i=0; i< n; i++) 
        cin>> a[i];
    sort(a, a+n);
    for( int i=0; i< n; i++) 
        cout << a[i] <<" ";
    cout << endl;

    int *ptr= uppe_bound(a,a+n, 5);
    if(ptr== (a+n)){ cout<< "element not found"; return 0;}
    cout << (*ptr)<< endl; */

/* 
    int n;  cin >> n; 
    vector <int> v(n);
    for (int i=0; i< n; i++)
    {
        cin >> v[i];
    } 
    int x;
    x = *min_element(v.begin(), v.end()) ;
    cout << x  << " "<<  &x << endl; 
    x = *max_element(v.begin(), v.end()) ;
    cout << x  << " "<<  &x << endl; 
    x = accumulate(v.begin(), v.end(), 0) ;
    cout << x  << " "<<  &x << endl; 
    x = count(v.begin(), v.end(), 5) ;
    cout << x  << " "<<  &x << endl; 
cout<<"\n \n";
    auto it = find(v.begin(), v.end(), 2);
    if(it!= v.end()) cout << *it;
    else cout<< "Element not found";
cout<<"\n \n";
    for( auto it = v.begin(); it!= v.end(); it++)
        cout<<*it<<" ";
        cout<<"\n";
    sort(v.begin(), v.end());
    for( auto it = v.begin(); it!= v.end(); it++)
        cout<<*it<<" ";
 */ 
    // Lambda function
    
    vector <int > v = {2, 4, 6};
    cout << all_of(v.begin(), v.end(), [](int x){ return !(x%2);});   //
    cout << any_of(v.begin(), v.end(), [](int x){ return x>0;});
    cout << none_of(v.begin(), v.end(), [](int x){ return x>0;});
}
