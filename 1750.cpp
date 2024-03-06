#include<bits/stdc++.h>
using namespace std;
 
     int minimumLength(string s) {
        
       /*
          1> increase p while character at p pointer is equal to ch and p pointer is less then q pointer
          2> decrease q while chracter at q pointer is equal to character at pointer p(ch)
          
       */
            
        int p = 0; int q = s.size()-1;
                
        while(p<q && s[p]==s[q]){
            
           char ch = s[p];
            while(p < q && s[p] == ch)
            {
                p++;
            }
            
            while(q >= p && s[q] == ch)
            {
                q--;
            }
                
        }
        return q-p+1;
    }
int main(){
    
    cout<<minimumLength("cabaabac");

    return 0;
}