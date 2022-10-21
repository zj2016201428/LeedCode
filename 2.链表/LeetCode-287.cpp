/*************************************************************************
	> File Name: LeetCode-287.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  2/28 17:29:12 2020
 ************************************************************************/
/*************************************************************************
	> File Name: 287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 20时51分25秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<queue>
using namespace std;
int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while(p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}
/*
//方法二
class Solution {
public:
    int findDuplicate(vector<int> nums) {
        int length = nums.size();
        int left = 1, right = length - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            int count = 0;
            for(int x : nums) {
                if (x <= mid) count++;
            }
            if (count <= mid) left = mid + 1;
            else right = mid;
        }
        return left;
    }
};
*/

/*
 * 此题两种做法都要好好理解，分别是快慢指针和二分法。
 */
