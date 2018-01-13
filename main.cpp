//
//  main.cpp
//  LeetCode29_DivideTwoIntegers
//
//  Created by Rui on 1/12/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0 || (dividend == INT_MIN && divisor == -1))
            return INT_MAX;
        
        long long m = abs((long long) dividend);
        long long n = abs((long long) divisor);
        long long res = 0;
        
        int sign = （(dividend < 0) ^ (divisor < 0)） ? -1 : 1; //defind the positive or negetive
        if(n == 1)
            return sign == 1? m : -m;
        
        while(m >= n)
        {
            long long t = n;
            long long p = 1;
        
            while(m >= (t<<1)){
                t <<= 1; //t multipy by 2
                p <<= 1; // p multipy be 2
            }
            
            res += p;
            m -= t;
            
        }
        
        return sign == 1? res: -res;
    }
};
