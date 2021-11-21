#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int n, Q; cin>>n;
	int pf[n+1][n+1]={0}, ar[n+1][n+1]={0};

	for(int i=0; i<=n; i++)
	   for(int j=0; j<=n; j++)
			   ar[i][j] = pf[i][j] =0;

	for(int i=1; i<=n; i++)
	   for(int j=1; j<=n; j++){
		   cin>>ar[i][j];
		   pf[i][j] = ar[i][j] + pf[i-1][j] + pf[j][i-1] + pf[i-1][j-1];
	   }
	   
	cin>>Q;
	while(Q--)
	   {
		   int a, b, c,d;
		   cin>>a>>b>>c>>d;
		   cout<< pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<< endl;
	   } 

}
