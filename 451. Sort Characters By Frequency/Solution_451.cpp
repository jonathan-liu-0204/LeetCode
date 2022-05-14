typedef pair<char, int> Pair;

bool sortbysec(const pair<char,int> &a, const pair<char,int> &b){
    return (a.second > b.second);
}

class Solution {
public:
    string frequencySort(string s) {
        
        string ans;
        
        map<char, int> m;
        vector<Pair> v;
        
        for(auto c : s){
            m[c]++;
        }
        
        for(auto itr = m.begin(); itr != m.end(); ++itr){
            v.push_back(make_pair(itr->first, itr->second));
        }
        
        sort(v.begin(), v.end(), sortbysec);
        
        for(auto e : v){
            for(int i = 0; i < e.second; i++){
                ans += e.first;
            }
        }  
        return ans;
    }
};


// Original Solution (Failed)

//         vector<pair<char, int>> pairing;
                
//         sort(s.begin(), s.end());
                
//         char current = '@';
//         int index = -1;

        
//         for(int i = 0; i < s.length(); i++){
//             if(s[i] != current){
//                 pairing.push_back(make_pair(s[i], 1));
//                 current = s[i];
//                 // element.push_back(s[i]);
//                 // count.push_back(1);
//                 index++;
//             }
//             else{
//                 pairing.back().second += 1;
//             }
//         }
                
//         for (int i = 0; i<count.size(); i++){
//             pairing.push_back( make_pair(element[i], count[i]) );
//         }
        
        
//         string ans = "";
        
//         for(int i = 0; i < pairing.size(); i++){            
//             for(int j = 0; j < pairing[i].second; j++){
//                 ans = ans + pairing[i].first;
//             }    
//         }
        