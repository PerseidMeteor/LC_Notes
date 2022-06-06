#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

//两数相除 divided two integers
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == 1)
            return INT_MAX;

        int res = 1;
        if(dividend < 0){
            res = -res;
            cout << res << endl;
            dividend = -dividend;
        }
        if(divisor < 0){
            res = -res;
            cout << res <<endl;
            divisor = -divisor;
        }

        int quotient = 0;
        cout << dividend << "***"<< divisor << endl;
        while(dividend >= divisor){
            dividend -= divisor;
            ++quotient;
        }
        if(res == 1)
            return quotient;
        else
            return -quotient;
    }
};
int main()
{
    Solution x;
    cout << x.divide(-6, -2);
    return 0;
}

