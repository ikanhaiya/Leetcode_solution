#include<bits/stdc++.h>
using namespace std;

    struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  bool hasCycle(ListNode *head) {
        
        if(head==NULL){
            return false;
        }
        
        
        int a = INT_MIN;
        
        ListNode* frst = head;
        
        while(frst->next!=NULL){
            
            if(frst->val == a){
                return true;
            }
            
            else{
                frst->val = a;
                frst = frst->next;
                
            }
        }
        
        return false;
    }
int main(){


    return 0;
}