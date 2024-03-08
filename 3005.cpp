#include<bits/stdc++.h>
using namespace std;


int maxFrequencyElements(vector<int>& nums) {
      
     
           unordered_map<int,int> mp;
        
           for(int i = 0;i < nums.size();i++){
                
               if(mp.count(nums[i])){
                   mp[nums[i]]++;
               }
               
               else{
                   mp[nums[i]] = 1;
               }
           }
        
            int c  = -1;
        
            for(auto it = mp.begin();it!=mp.end(); it++){
                
                c = max(c,it->second);
            }
        
            int ans = 0;
            
            for(auto it = mp.begin();it!=mp.end(); it++){
                
                if(it->second == c){
                    ans+=c;
                }
            }
            
            
           return ans;
    }
int main(){

    vector<int> v = {1,2,2,3,1,4};

     cout<<maxFrequencyElements(v);
    return 0;
}