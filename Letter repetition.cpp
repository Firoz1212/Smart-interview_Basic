/*
Given an integer - N, print a string with the letter 'o' repeated for N times in the word Go...od.

Input Format

First and only line of input contains a single integer N.

Constraints

0 <= N<= 100

Output Format

Print the word Go..od with letter 'o' repeated N times.

Sample Input 0

4
Sample Output 0

Gooood
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
    int N;
    cin>>N;
    cout<<"G";
    for(int i=0;i<N;i++){
        cout<<"o";
    }
    cout<<"d";
    return 0;
}
