/*
Given a non-negative number - N, print N!

Input Format

First and only line of input contains a number - N.

Constraints

0 <= N <= 10

Output Format

Print factorial of N.

Sample Input 0

5
Sample Output 0

120
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
    int N,f=1;
    cin>>N;
    for(int i=1;i<=N;i++){
        f=f*i;
    }
    cout<<f<<endl;
    return 0;
}
