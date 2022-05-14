class Solution {
public:
    
    static bool sortbysec(const pair<char,int> &a, const pair<char,int> &b){
        return (a.second > b.second);
    }
    
    string frequencySort(string s) {
                
        sort(s.begin(), s.end());
                
        char current = '@';
        int index = -1;
        vector<char> element;
        vector<int> count;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] != current){
                element.push_back(s[i]);
                count.push_back(1);
                current = s[i];
                index++;
            }
            else{
                count[index]++;
            }
        }
        
        vector<pair<char, int>> pairing;
        
        for (int i = 0; i<count.size(); i++){
            pairing.push_back( make_pair(element[i], count[i]) );
        }
        
        sort(pairing.begin(), pairing.end(), sortbysec);
        
        string ans = "";
        
        for(int i = 0; i < count.size(); i++){            
            for(int j = 0; j < pairing[i].second; j++){
                ans = ans + pairing[i].first;
            }    
        }
        
        return ans;
    }
};