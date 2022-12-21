/*
Given two integers a and b, compute a power b.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First and only line of input contains two positive integers a and b.

Constraints

1 <= a <= 100
0 <= b <= 9

Output Format

Print a power b.

Sample Input 0

2 3
Sample Output 0

8
Explanation 0

Self Explanatory.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,f=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        f=f*a;
    }
    cout<<f;
    return 0;
}
