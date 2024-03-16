#include<bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
        
   unordered_map<int,int> mp;
        
        int cnt = 0;
        int maxi = 0;
        
        mp[0] = -1;
        for(int i = 0;i<nums.size();i++){
            
            cnt += (nums[i]==0) ? -1 : 1;
            
            if(mp.count(cnt)){
                
                maxi = max(maxi, i-mp[cnt]);
            }
            
            else {
                mp[cnt] = i;
            }
                
        }        
        
        return maxi;
    }


int main(){
    


    return 0;
}