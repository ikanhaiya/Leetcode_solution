#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        
        int cnt = 0;        
        
        vector<int> ans(nums.size(), 0);
        
        int a = 1;
        
        for(int i  = 0;i<nums.size();i++){
            
            a *= (nums[i]==0) ? 1 : nums[i];
            
            if(nums[i]==0){
                cnt++;
               
            }
        }
        
        if(cnt>1){
            return ans;
        }
        
        
        
        for(int i = 0;i<nums.size();i++){
          
            if(nums[i]==0){
                ans[i] = a;
            }
            
            else if(nums[i]!=0 && cnt==1){
                ans[i] = 0;
            }
            
            else{
                ans[i] = a/nums[i];
            }
        }
        
      
        
        return ans;
    }


int main(){


    return 0;
}