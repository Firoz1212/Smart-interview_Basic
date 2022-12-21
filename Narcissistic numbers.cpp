/*

Given an integer N, check whether it is a Narcissistic number or not.
Note: A narcissistic number is a number that is the sum of its own digits each raised to the power of the number of digits

Input Format

First and only line of input contains a integer - N.

Constraints

0 <= N <= 109

Output Format

Print "Yes" if the number is Narcissistic number, "No" otherwise.

Sample Input 0

8208
Sample Output 0

Yes
Explanation 0

84 + 24 + 04 + 84 = 8208
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long N,q;
        long long s=0,r;
    cin>>N;
    q=N;
    int d= int(log10(N) + 1);
    while(q != 0){
        r=q%10;
        s=s+pow(r,d);
        q=q/10;
    }
    if(s==N)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
