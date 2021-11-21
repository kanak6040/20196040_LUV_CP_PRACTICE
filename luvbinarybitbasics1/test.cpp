#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    /* int n; cin>>n;
    vector<int> days[n];
    for(int i=0; i< n; i++){
        int num_workers; cin>>num_workers;
        for( int j=0; j< num_workers; j++){
            int day; cin>> day;
            days[i].push_back(day);
        }
    } */

    int n; 
    cin>>n;

    vector<int> masks(n,0);  // array of n, initialised with 0

    for(int i=0; i< n; i++){
        int num_workers; 
        cin>>num_workers;

        int mask = 000000000000000000000000000000000000;

        for( int j=0; j< num_workers ; j++){
            int day; 
            cin>> day;

            mask = ( mask | ( 1<<day ) );
        }
        masks[i] = mask;
    } 
    
    int max_days =0;

    for( int i =0; i< n; i++)
    {

        for(int j = i+1; j< n; j++)
        {

            int common = ( masks[i] & masks[j] );
            int common_days = __builtin_popcount(common);
            max_days = max( max_days, common_days );
            cout << i << " "<< j<<" "<< common_days<<endl;

        }
    }
    
    for( int i =0; i< n; i++)
    {
        for(int j = i+1; j< n; j++)
        {
            if( __builtin_popcount((masks[i]& masks[j])) == max_days )
            cout<< i+1<<" " << j+1;
        }
    }
    cout<<"\n";
    
    cout<< max_days<<" \n \n";
}
