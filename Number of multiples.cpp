/*
Given a positive integer - N, print the number of multiples of 3, 5 between [1, N].

Input Format

First and only line of input contains a positive integer - N.

Constraints

1 <= N <=1018

Output Format

Print the number of multiples of 3, 5 in range of 1 to N.

Sample Input 0

12
Sample Output 0

6
Explanation 0

Multiples of 3 and 5 in range of 1 to 12 are 3, 5, 6, 9, 10, 12.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long N;
    cin>>N;
    cout<<N/3+N/5-N/15<<endl;
    return 0;
}
