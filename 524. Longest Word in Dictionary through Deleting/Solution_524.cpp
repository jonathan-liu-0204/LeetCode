class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        
        string longest = "";
        
        for(int i = 0; i < dictionary.size(); i++){
            
            int count = 0;
                                    
            int index1 = 0;
            int index2 = 0;
            
            while(index1 < dictionary[i].size() && index2 < s.size()){
                if(s[index2] == dictionary[i][index1]){
                    count++;
                    index1++;
                    index2++;
                }
               else{
                    index2++;      
               }
            }
            
            if(count == dictionary[i].size()){
                if(count > longest.size()){
                    longest = dictionary[i];
                }
                else if(count == longest.size()){
                    if(dictionary[i] < longest){
                        longest = dictionary[i];
                    }
                }
            }
        }
        
        return longest;
    }
};