/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  3/29 13:20:49 2020
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<queue>
using namespace std;

int modefy_list(int b[]) {
    cout << "b地址" << b << endl;
    b[0] = 3;
    b[2] = 1;
    return 1;
}

int main() {
    int a[3] = {1, 2, 3};
    cout << "a地址" << a << endl;
    cout << "修改前:" << endl;
    for(int t : a) cout << t << endl;
    modefy_list(a);
    cout << "修改后:" << endl;
    for(int x : a) cout << x << endl;
    cout << "方法二：" << endl;
    for(int i = 0; i < 3; i++) cout << *(a+i) << endl;
    return 0;
}
