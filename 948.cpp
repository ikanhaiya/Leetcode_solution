// **Intuition**
//  1> No matter how much power you loose you will get only one score so loose minimum power 
//  2> If score is to be loose get maximum power.
 
//  **Algorithm**
//  1> assign two pointers i = 0 and j = n-1(last index of array)
 
//  2> if tokens[i]<=power you can get score take it and increment i by 1 becoz you cant use that token again.
 
//  3> if tokens[i]>power cant play face up play face down reduce score by 1 and increase power by tokens[j] power+=tokens[j] reduce j by 1 j--;


#include<bits/stdc++.h>
using namespace std;

  int bagOfTokensScore(vector<int>& tokens, int power) {
        
		// if tokens size is 0 then score will be 0.
        if(tokens.size()==0){
            return 0;
        }
        
        sort(tokens.begin(), tokens.end());
        
		// if minimum token value is greater than that of power then you cant play any move hence score will be 0 
        if(power<tokens[0]) return 0;
        
        int i = 0, j = tokens.size()-1;
        
        int scr = 0;
       
        while(i<j){
            
            if(tokens[i]<=power){
                
                scr+=1;
                power-=tokens[i];
                i++;
            }
            
            else if(tokens[j]>power){
                
                scr-=1;
                power+=tokens[j];
                j--;
            }
        }
        
		// last token if you have power left then play face up and increase score.
        if(i==j){
            
            if(power>=tokens[i]){
                scr+=1;
            }
        }
        
        return scr;
    }

    int main(){

        vector<int> v={100,200,300,400};
         
         int pow = 200;
         cout<<bagOfTokensScore(v,pow);
        return 0;
    }