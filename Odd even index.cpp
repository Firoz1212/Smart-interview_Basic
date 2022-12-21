/*
Given a string, print all the letters present at odd index, followed by the letters present at even index.

Input Format

Input contains a string S, consisting of ascii characters.

Constraints

1 <= len(S) <= 100

Output Format

Print letters present at odd index, followed by the letters present at even index.

Sample Input 0

afdg5tg
Sample Output 0

fgtad5g
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
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(i%2!=0){
            cout<<s[i];
        }
    }
     for(int i=0;i<l;i++){
        if(i%2==0){
            cout<<s[i];
        }
    }
    return 0;
}
