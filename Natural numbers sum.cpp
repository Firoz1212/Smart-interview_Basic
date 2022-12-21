/*
Given a positive integer N, print the sum of 1st N natural numbers.

Input Format

First and only line of input contains a positive integer - N.

Constraints

1 <= N <= 104

Output Format

Print the sum of 1st N natural numbers.

Sample Input 0

4
Sample Output 0

10
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
    int N,s=0;
    cin>>N;
    for(int i=1;i<=N;i++)
        s+=i;
    
    cout<<s<<endl;
    return 0;
}
