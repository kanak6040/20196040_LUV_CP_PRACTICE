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

   /*  map< pair<string, string>, vector<int> > m;
    int i, n, j; 
    cin>>n;
    for(i=0; i<n; i++){
        string fn, ln;
        int ct; 
        cin>> fn >> ln>> ct;

        for(j = 0; j< ct; j++){
            int x; 
            cin>> x;
            m[{fn,ln}].push_back(x);
        }
    }

    for(auto &pr: m)  //to avoid making copies
    {
        auto &fullname = pr.first;
        auto &list = pr.second;
        cout << fullname.first << " " << fullname.second ; 
        for( auto &marks: list)
            cout<< marks<< " ";
        cout<< endl;
    }

 */
    //  name in lexiographical order
    // decreasing order marks
/* 
    map <int, multiset<string>> marks_map;
    int n, i, j;
    cin >> n;

    for(i=0; i< n; i++)
    {
        string name; 
        int marks; 
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }
    auto cur_it = (--marks_map.end());
    while(true)
    {
        auto &students = (*cur_it).second;
        int mark = (*cur_it).first;
        for(auto student:students)
        {
            cout << student << " "<< mark;
        }
        if(cur_it == marks_map.begin()) break;
        cur_it--;
        cout<<endl;
    }

 */

    //second way
     //  name in lexiographical order
    // decreasing order marks


    
}
