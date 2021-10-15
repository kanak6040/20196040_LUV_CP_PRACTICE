#include <bits/stdc++.h>
using namespace std;

void reversemy(char c[], int n)
{
    stack<char> S;
    for(int i=0; i<n; i++)
    {
        S.push(c[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<S.top();
        S.pop();
    }
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char C[51];
    cin>> C;
    
    reversemy(C, strlen(C));
}
