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
/* 
    //print unique strings in lexiographical manner with their count
    map < string, int> m;   //first element==key //second elemnt random
    int i,n; cin>>n;
    for(i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for( auto pr: m){
        cout<<pr.first<<" "<<pr.second;
    }

 */
 /*    
    //print all strings count
    unordered_map <string, int> umap;
    int i,n; cin>>n;
    for(i=0; i<n; i++){
        string s;
        cin>>s;
        umap[s]++;
    }
    int q; cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<umap[s]<<"\n";
    } */

    //print strings in exiographical order
 /*    set<string> set;
    int i,n; cin>>n;
    for(i=0; i<n; i++){
        string s;
        cin>>s;
        set.insert(s);
    }
    for( auto pr:set){
        cout<<pr<<" ";
    } */
    vector<string> names;
    int i,n; cin>>n;
    for(i=0; i<n; i++){
        string s;
        cin>>s;
        names.push_back(s);
    }
    sort(names.begin(), names.end(),/* comparator*/ );
    for(auto chars:names)
    {
        cout<<chars<<" ";
    }
}
