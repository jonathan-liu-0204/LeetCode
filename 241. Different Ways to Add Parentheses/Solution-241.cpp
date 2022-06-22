class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        
        vector<int> ans;
        
        for(int i = 0; i < expression.length(); i++){
            if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*'){
                
                vector<int> lefts = diffWaysToCompute(expression.substr(0, i));
                vector<int> rights = diffWaysToCompute(expression.substr(i+1));
                
                for(int l = 0; l < lefts.size(); l++){
                    for(int r = 0; r < rights.size(); r++){
                        if(expression[i] == '+'){
                            ans.push_back(lefts[l] + rights[r]);
                        }
                        else if(expression[i] == '-'){
                            ans.push_back(lefts[l] - rights[r]);
                        }
                        else{
                            ans.push_back(lefts[l] * rights[r]);
                        }
                    }
                }
            }
        }
        
        if(ans.empty()){
            return {stoi(expression)};
        }
        
        return ans;
    }
};

// Runtime: 10 ms, faster than 24.34% of C++ online submissions for Different Ways to Add Parentheses.
// Memory Usage: 11.5 MB, less than 24.81% of C++ online submissions for Different Ways to Add Parentheses.