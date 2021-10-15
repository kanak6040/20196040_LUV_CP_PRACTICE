#include <bits/stdc++.h>
using namespace std;
const int M= 1e9+7;

int binExpRecur1( int a, int b)
{
    if(b==0) return 1;
    if(b&1) return (a * binExpRecur1(a, b/2) * binExpRecur1(a, b/2))%M;
    else return (binExpRecur1(a, b/2) * binExpRecur1(a, b/2))%M;
}


int binExpRecur2( int a, int b)
{
    
    if(b==0) return 1;
    int res = binExpRecur2(a, b/2);
    if(b&1) return (a * res * res);
    else return (res * res);
}


int binExpIter( int a, int b)
{
    int ans = 1;
    while(b){
        if(b&1)
            ans = ans*a;
        a = a*a;
        b= b>>1; 
    }
    return ans;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    /* 
    double d=1;
    for( int i=0; i< 50; i++)
    {
        cout<< i<<" " << fixed<< setprecision(20)<< d<< endl;
        d= d*10;
    } */
/* 
    int a= 2, b =13;
    int ans =1;
    for( int i =0; i< b; i++)
    {
        ans += a;  
        ans%= M;
    }
    cout<< ans; */


    //RECURSIVE METHOD

/*     int a =2, b=13;
    cout << binExpRecur1(a, b)<< endl;
    cout << binExpRecur2(a, b)<< endl;
 */

    //ITERATIVE METHOD
    int a=2, b=19;
    cout << binExpIter(a,b);
}
