/*

Given an integer N, check whether it is a Harshad number or not.
Note: A Harshad number is an integer, that is divisible by the sum of its digits.

Input Format

First and only line of input contains a integer - N.

Constraints

1 <= N <= 109

Output Format

Print "Yes" if the number is a Harshad number, "No" otherwise.

Sample Input 0

18
Sample Output 0

Yes
Explanation 0

18 / (1 + 8) = 2
As 18 is divisible by the sum of its digits, it is a Harshad number.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,q,r,s=0;
    cin>>N;
    q=N;
    while(q>0){
        r=q%10;
        s=s+r;
        q=q/10;
    }
    if(N%s==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    return 0;
}
