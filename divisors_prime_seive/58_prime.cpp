#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N  = 1e5 +10;
vector<int> divisors[N];
int sum[N];
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // int n;  cin >> n;
    // bool is_prime = 1;
    // for( int i=2 ;i < n ; i++){
    //     if( n%i == 0){
    //         is_prime = false;
    //         break;
    //     }
    // } // o(N)
    // cout << is_prime ;

    // int n;  cin >> n;
    // bool is_prime = 1;
    // for( int i=2 ;i*i < n ; i++){
    //     if( n%i == 0){
    //         is_prime = false;
    //         break;
    //     }
    // } // o(N)
    // cout << is_prime ;


    // int n ; cin >> n;
    // vector<int> prime_factors;
    // for( int i =2 ;i <= n ; i++){
    //     while( n%i == 0){
    //         prime_factors.push_back(i);
    //         n/= i;
    //     }
    // }
    // for( auto v: prime_factors)
    //     cout << v<<"\n";


    // int n ; cin >> n;
    // vector<int> prime_factors;
    // for( int i =2 ;i*i <= n ; i++){
    //     while( n%i == 0){
    //         prime_factors.push_back(i);
    //         n/= i;
    //     }
    // }
    // if( n > 1) prime_factors.push_back(n);
    // for( auto v: prime_factors)
    //     cout << v<<"\n";



    // const int N  = 1e7 +10;
    // vector<bool> isPrime(N,1);

    // isPrime[0] = isPrime[1] = 0;
    // for( int i =2 ;i < N ; i++){
    //     if( isPrime[i] == 1){
    //         for( int j =2*i ; j < N ; j+=i){
    //             isPrime[j] = 0;
    //         }
    //     }
    // } 

    // for( int i =1 ; i < 100 ; i++){
    //     if( isPrime[i])
    //         cout << i<< "\n";
    // }


    // const int N  = 1e7 +10;
    // vector<bool> isPrime(N,1);
    // vector<int> lp(N, 0) , hp(N, 0);

    // isPrime[0] = isPrime[1] = 0;
    // for( int i =2 ;i < N ; i++){
    //     if( isPrime[i] == 1){
    //         lp[i] = hp[i] = i;
    //         for( int j =2*i ; j < N ; j+=i){
    //             isPrime[j] = 0;
    //             hp[j] = i; 
    //             if( lp[j] == 0)
    //                 lp[j] = i;
    //         }
    //     }
    // } 

    // for( int i =2 ; i < 100 ; i++){
    //         cout << i<<" " <<lp[i]<< " "<<hp[i]  <<"\n";
    // }


    // int n ;  cin >> n;
    // vector<int> prime_factors;
    // map<int , int> m;
    // while( n > 1){
    //     int prime_factor = hp[n];
    //     while( n % prime_factor == 0){
    //         n /= prime_factor;
    //         prime_factors.push_back(prime_factor);
    //         m[prime_factor]++;
    //     }
    // }
    // for( auto v: prime_factors)
    //     cout << v<<" ";
    // cout<< "\n";
    // for( auto v: m){
    //     cout << v.first <<" " <<v.second<<"\n";
    // }


    
    // for( int i =2 ; i < N ; i++){
    //     for( int   j= i; j < N; j+=i){
    //         divisors[j].push_back(i);
    //         sum[j] +=i;
    //     }
    // }
    // for( int i = 2; i < 100 ; i++){
    //     for( int div: divisors[i]){
    //         cout << div << " ";
    //     }
    //     cout<<"Sum: " <<sum[i];
    //     cout << "\n";
    // }
    
    
    

















}
