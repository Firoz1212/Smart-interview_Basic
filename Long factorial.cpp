/*
Given a non-negative number - N, print N!

Input Format

First and only line of input contains a number - N.

Constraints

0 <= N <= 20

Output Format

Print factorial of N.

Sample Input 0

3
Sample Output 0

6
Explanation 0

Self Explanatory
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long f=1,N;
    cin>>N;
    for(int i=1;i<=N;i++)
        f=f*i;
    
    cout<<f<<endl;
    return 0;
}
