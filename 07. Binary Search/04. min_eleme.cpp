
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>nums{1,2,3,4,5};
    vector<int>pre(nums.size(),0);
    pre[0] = nums[0];
    for(int i = 1; i<nums.size(); i++) {
        pre[i] = nums[i] + pre[i-1];
    }
    for(auto val :pre)cout<<val<<" " ;
    cout<<endl ;
    
    int s,e;
    cin>>s>>e;
    int ans  = pre[e] - pre[s-1];
    cout<<ans;

    return 0;
}
