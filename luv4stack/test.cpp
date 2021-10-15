#include <bits/stdc++.h>
using namespace std;
const int N= 1e7+10;
long long int ar[N];

unordered_map<char, int> symbols = {{'[',-1}, {'(',-2}, {'{',-3},{']',1}, {')',2}, {'}', 3}};
string isbalanced(string s)
{
    stack<char> st;
    for(char bracket:s)
    {
        if(symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else 
        {
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] !=0) return "NO";
        }
    }
    if(st.empty()) return "YES";
    else return "NO";
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int t; cin>>t;
    while(t--)
    {  
        string s;
        cin >>s;
        cout<<isbalanced(s)<<endl;
    }

}
