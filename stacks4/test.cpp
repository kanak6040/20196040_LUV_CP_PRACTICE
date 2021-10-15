#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = { {'(',1}, {'{', 2}, {'[', 3}, {')',-1}, {'}', -2}, {']', -3} };

string checkpara(string s)
{
   stack<char> st;
   for(char bracket:s)
   {
      if(symbols[bracket] > 0)
         st.push(bracket);
      else
      {
         if(st.empty()) return "false";
         else if(st.top()+ symbols[bracket]!=0) return "false";
         st.pop();
      }
   }
   if(st.empty()) return "true";
   else return "false";
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   string s;
   cin>>s;
   cout<< checkpara(s);

}
