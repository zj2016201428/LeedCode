/*************************************************************************
	> File Name: LeetCode-202.cpp
	> Author: 
	> Mail: 
	> Created Time: 三 10/19 11:26:56 2022
 ************************************************************************/

class Solution {
public:
    int next(int x) {
        int a = 0;
        while (x) {
            a += (x % 10) * (x % 10);
            x /= 10;
        }
        return a;
    }
    bool isHappy(int n) {
        int p = n, q = n;
        while (p != 1) {
            p = next(p);
            q = next(next(q));
            if (p == q) break;
        }
        return (p == 1);

    }
};




/*
 * 12-15行，取一个数各位数的方法。
