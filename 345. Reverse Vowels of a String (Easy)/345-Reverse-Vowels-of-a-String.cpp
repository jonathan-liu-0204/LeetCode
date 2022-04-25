#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        
        int left = 0;
        int right = s.length() - 1;
        char tmp = NULL;

        while(left < right){

            if(s[left] == 'a' | s[left] == 'A' | s[left] == 'e' | s[left] == 'E' | s[left] == 'i' | s[left] == 'I' | s[left] == 'o' | s[left] == 'O' | s[left] == 'u' | s[left] == 'U'){
                if(s[right] == 'a' | s[right] == 'A' | s[right] == 'e' | s[right] == 'E' | s[right] == 'i' | s[right] == 'I' | s[right] == 'o' | s[right] == 'O' | s[right] == 'u' | s[right] == 'U'){
                    tmp = s[left];
                    s[left] = s[right];
                    s[right] = tmp;
                    left++;
                    right--;
                }
                else{
                    right--;
                }
            }
            else if(s[right] == 'a' | s[right] == 'A' | s[right] == 'e' | s[right] == 'E' | s[right] == 'i' | s[right] == 'I' | s[right] == 'o' | s[right] == 'O' | s[right] == 'u' | s[right] == 'U'){
                left++;
            }
            else{
                left++;
                right--;
            }
        }
        return s;
    }
};