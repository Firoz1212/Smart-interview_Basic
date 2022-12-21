/*
Given an integer N, check whether it's an Armstrong number or not.
Note: Armstrong number is a number that is equal to the sum of cubes of its digits.

Input Format

First and only line of input contains a integer - N.

Constraints

0 <= N <= 109

Output Format

Print "Yes" if the number is an Armstrong number, "No" otherwise.

Sample Input 0

153
Sample Output 0

Yes
Explanation 0

13 + 53 + 33 = 153
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,s=0,r,q;
    cin>>N;
    q=N;
    while(q>0){
        r=q%10;
        s=s+(r*r*r);
        q=q/10;
    }
    if(s==N)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
