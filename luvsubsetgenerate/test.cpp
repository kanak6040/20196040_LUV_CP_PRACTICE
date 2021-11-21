#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> subsets;
void generate(vector<char> &subset, int i, vector<char> &nums)
{
    if(i==nums.size()) 
        subsets.push_back(subset);
    else{
        generate(subset, i+1, nums);  //ith element not taken

        subset.push_back(nums[i]);    //taken
        generate(subset, i+1, nums);
        subset.pop_back();
    }
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >>n;
    vector<char> nums;
    for(int i=0; i< n; i++)
    {
        char temp; cin >> temp; 
        nums.push_back(temp);
    }

    vector<char> subset;
    generate(subset,0, nums);

    for(auto value:subsets)
    {
        cout<<"{";
        for(auto ele:value)
        {
            cout<< ele<<",";
        }
        cout<<"}, ";
    }
    
}
