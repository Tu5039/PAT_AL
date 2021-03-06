/*
This time, you are supposed to find A+B where A and B are two polynomials.

Input Specification:
Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:

K N​1​​  a​N​1​​  N​2​​  a​N​2​​ ​​  ... N​K​​  a​N​K ​​ 
where K is the number of nonzero terms in the polynomial, N​i​​  and a​N​i​​ ​​  (i=1,2,⋯,K) are the exponents and coefficients, respectively. It is given that 1≤K≤10，0≤N​K​​ <⋯<N​2​​ <N​1​​ ≤1000.

Output Specification:
For each test case you should output the sum of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate to 1 decimal place.

Sample Input:
2 1 2.4 0 3.2
2 2 1.5 1 0.5
Sample Output:
3 2 1.5 1 2.9 0 3.2
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int T1, T2, tmp;
    double a[1001] = {0}, b[1001] = {0}, c[1001] = {0};

    cin >> T1;
    while (T1--)
    {
        cin >> tmp;
        cin >> a[tmp];
    }

    cin >> T2;
    while (T2--)
    {
        cin >> tmp;
        cin >> b[tmp];
    }

    int cnt = 0;
    for (int i = 0; i < 1001; i++)
    {
        c[i] = a[i] + b[i];
        if (c[i])
            cnt++;
    }

    cout << cnt;
    for (int i = 1000; i >= 0; i--)
    {
        if (c[i])
            cout << " " << i << setprecision(1) << fixed << " " << c[i];
    }
    cout << endl;

    return 0;
}