/*
1001 A+B Format (20分)
Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input Specification:
Each input file contains one test case. Each case contains a pair of integers a and b where −10
​6
​​ ≤a,b≤10
​6
​​ . The numbers are separated by a space.

Output Specification:
For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input:
-1000000 9
Sample Output:
-999,991
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int a, b; //定义输入数a,b
    cin >> a >> b;
    int ans = a + b; //计算a+b
    if (ans == 0)
        cout << 0;
    else
    {
        vector<int> *v = new vector<int>(); //用vector模拟链表，每次取得的末三位插入到第一位以保证顺序
        while (ans != 0)
        { //每次提取ans的末3位，并直接十进制右移3位。
            v->insert(v->begin(), ans % 1000);
            ans /= 1000;
        }
        auto i = v->begin();
        cout << *i;
        i++;
        for (; i != v->end(); i++)
        {
            cout << "," << setw(3) << setfill('0') << abs(*i);
        }
        delete v;
    }
    cout << endl;
    return 0;
}