/*
Given a number N, reverse the number.

Input Format

First and only line of input contains a integer - N.

Constraints

-1018 <= N <= 1018

Output Format

Print the reversed number.

Sample Input 0

1344
Sample Output 0

4431
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
    long long signed N,s=0;
    cin>>N;
    while(N != 0){
        s=(s*10)+(N%10);
        N=N/10;
    }
    cout<<s<<endl;
    return 0;
}
