class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
               
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int gn = g.size();
        int sn = s.size();
        
// Optomized Solution
        int i = 0; 
        int j = 0;
        
        while(i < gn && j < sn){
            if(g[i] <= s[j]){
                i++;
            }
            j++;
        }
        
        return i;
    }
};

// Initial Solution 
//
//      int count = 0;
//
//      for(int i = 0; i < gn; i++){
//          for(int j = 0; j < sn; j++){
//              
//              if(g[i] <= s[j]){
//                  count++;
//                  s.erase(s.begin() + j);
//                  sn--;
//                  break;
//              }
//          }
//      }
//      return count;