#include<bits/stdc++.h>
using namespace std;

// create map mp <int,char> and store all the characters of string 'order' and make their index as key so the characters
// will be stored in custom order in map automatically index wise 

// 2> create unordered_map 'st'<char,int> store all the variables and their frequency in map st;

// 3> now traverse through map mp( here characters are stored in sorted order with index) 

//now check every time if character is present in map st if present then append all the occurences of that 
// character in ans string and erase that character from st map

// 5> now only those chracter will be left which are not present in custom order string so you can place
// those characters anywhere here I am appending it to the end of the ans string.

// code can be long but it is very straight forward.

string customSortString(string order, string s) {
     
        map<int, char> mp;
        
        for(int it = 0;it<order.size();it++){
            
            mp[it] = order[it];
        }
        
        string ans = "";
        unordered_map<char,int> st;
        
        for(int i = 0;i<s.size();i++){
            
            if(st.count(s[i])){
                st[s[i]]++;
            }
            else{
                st[s[i]]=1;
            }
        }
        
        for(auto it = mp.begin();it!=mp.end();it++){
            
            if(st.count(it->second)){
                for(int i = 0;i<st[it->second];i++){
                    ans.push_back(it->second);
                }
                
                st.erase(it->second);
            }
        }
        
        for(auto it = st.begin();it!=st.end();it++){
            
             for(int i = 0;i<it->second;i++){
                    ans.push_back(it->first);
                }
        }
        
        return ans;
        
        
    }

int main(){

   cout<<customSortString("bcafg","abcd");
    return 0;
}