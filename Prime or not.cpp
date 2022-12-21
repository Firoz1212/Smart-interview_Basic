/*

Given a positive integer N, check whether the number is prime or not.

Input Format

First and only line of input contains a integer - N.

Constraints

1 <= N <= 1012

Output Format

Print "Yes" if the number is prime, "No" otherwise.

Sample Input 0

11
Sample Output 0

Yes
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
    long long N;
  bool ab=false;
    cin>>N;
    if(N>1){
    for(long long i=2;i<sqrt(N);i++){
        if(N%i==0){
            ab=true;
            break;
        }
    }
    if(ab==false){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
