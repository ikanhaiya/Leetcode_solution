#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

// use prefix sum property and repeated sum means there has been sequence whoose sum was 0 
// use property of map(only unique keys) so if sum repeats map will update its key by that sum and prev will be lost which is to be deleted 
  ListNode* removeZeroSumSublists(ListNode* head) {
        
        
        ListNode* curr = head;
        
        ListNode* temp = new ListNode(0, head);

        unordered_map<int,ListNode*> mp;
        
        mp[0] = temp;
        
        int sum = 0;
        
        while(curr){
            sum += curr -> val;
            mp[sum] = curr;
            curr = curr->next;
        }
        
        
        sum = 0;
        
        curr = temp;
        
        while(curr){
            sum+=curr->val;
            curr->next = mp[sum]->next;
            curr = curr->next;
        }
        
        return temp -> next;
        
    }
int main(){

    return 0;
}