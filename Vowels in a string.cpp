/*
Given a string, check if it contains only vowels.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Constraints

1 <= len(S) <= 100

Output Format

Print "Yes" if string contains only vowels, "No" Otherwise.

Sample Input 0

SmartInterviews
Sample Output 0

No
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
   int v=0;
    for(int i=0;i<l;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
         v=v+1;
        }
    }
    if(l==v)
    cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
