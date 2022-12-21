/*
Given a string, print count of vowels and consonants in the string.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Constraints

1 <= len(S) <= 100

Output Format

Print count of vowels and consonants in the given string, separated by space.

Sample Input 0

aBxbbiAasPw
Sample Output 0

4 7
Explanation 0

Self Explanatory

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
   cin>>s;
    int l=s.length();
    int v=0,c=0;
    for(int i=0;i<l;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            v=v+1;
        }
        else{
            c=c+1;
        }
    }
    cout<<v<<" "<<c<<endl;
    return 0;
}
