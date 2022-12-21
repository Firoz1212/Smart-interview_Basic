/*
Given a string, toggle the case of each character in the given string.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Constraints

1 <= len(S) <= 100

Output Format

Print the toggled string.

Sample Input 0

abdBd
Sample Output 0

ABDbD
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
    for(int i=0;i<l;i++){           
        if(isupper(s[i])){  
            s[i] = tolower(s[i]);  
        }  
        else if(islower(s[i])){  
            s[i] = toupper(s[i]);  
        }      }
    cout<<s<<endl;
    return 0;
}
