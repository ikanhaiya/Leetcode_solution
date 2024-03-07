#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

 ListNode* middleNode(ListNode* head) {
        
        int cnt = 0;
        
        ListNode* nt = head;
        
        while(nt!=NULL){
            cnt++;
            nt=nt->next;
        }
        
        int mid = cnt/2+1;
        
        int c = 1;
        
        nt = head;
        
        while(c<mid){
        
            nt = nt->next;
            c++;
        }
        
        return nt;
    }
int main(){
    
 

    return 0;
}