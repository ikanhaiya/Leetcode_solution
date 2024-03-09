#include<bits/stdc++.h>
using namespace std;


// using unordered_set
 int getCommon(vector<int>& nums1, vector<int>& nums2) {
         
       unordered_set<int> st;
        
        for(int i = 0;i<nums1.size();i++){
            
            st.insert(nums1[i]);
        }
        
        for(int i = 0;i<nums2.size();i++){
            
            if(st.count(nums2[i])){
                return nums2[i];
            }
        }
        
        
        return -1;
    }

int main(){

    vector<int> nums1 = {1,2,4,5}, nums2 = {3,4,6};

  
  cout<<getCommon(nums1,nums2);

 return 0;
}