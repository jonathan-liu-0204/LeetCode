class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int i = 0;
    
        while(i < flowerbed.size()){
            
            if(n == 0){
                return true;
            }
            
            
            if(flowerbed.size() == 1){
                if(flowerbed[0] == 0){
                    return true;
                }
            }
            
            if(i == 0){
                if(flowerbed[i] == 0){
                    if(flowerbed[i+1] == 0){
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
            else if(i == flowerbed.size()-1){
                if(flowerbed[i] == 0){
                    if(flowerbed[i-1] == 0){
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
            else{
                if(flowerbed[i] == 0){
                    if(flowerbed[i-1] == 0){
                        if(flowerbed[i+1] == 0){
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                }
            }
            
            if(n == 0){
                return true;
            }
            
            i++;
        }
        
        return false;
    }
};

// Runtime: 48 ms, faster than 5.29% of C++ online submissions for Can Place Flowers.
// Memory Usage: 20.1 MB, less than 99.41% of C++ online submissions for Can Place Flowers.