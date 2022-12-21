/*
Given a sentence S and a character ch, count occurrence of the given character in the sentence

Input Format

First line of input contains a sentence - S and second line of input contains a single lowercase character - ch.

Constraints

1 <= len(S) <= 100

Output Format

Print count of the given character in the sentence.

Sample Input 0

Data Structures & Algorithms
s
Sample Output 0

2
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
   getline(cin,s);
    char ch;
    cin>>ch;
    int c=0;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]==ch){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
