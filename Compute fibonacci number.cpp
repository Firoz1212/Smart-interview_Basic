/*

For a given positive integer - N, compute Nth fibonacci number.

Input Format

First and only line of input contains a positive number - N.

Constraints

1 <= N <= 20

Output Format

Print the Nth fibonacci number.

Sample Input 0

4
Sample Output 0

3
Explanation 0

The fibonacci series is defined as:
1, 1, 2, 3, 5, 8,......
At 4th position we have 3.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int fR(int N)
{
    if (N <= 1)
        return N;
    return fR(N - 1) + fR(N - 2);
}
int main()
{
    int N;
    cin>>N;
    cout<<fR(N)<<endl;
    return 0;
}

    
