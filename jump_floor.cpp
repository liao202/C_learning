class Solution {
public:
    int jumpFloorII(int number) {
        if(number == 1){
            return 1;
        }
        
        // 初始状态
        int fn1 = 1;
        
        int fnn = 0;
        
        for(int i = 2; i <= number; ++i){
            // 状态转移方程
            fnn = fn1 * 2;
            
            fn1 = fnn;
        }
        
        return fnn;
    }
};
