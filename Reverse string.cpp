/*
Given a string, reverse the given string in-place and then print it.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

Input contains a string S, consisting of ascii characters.

Constraints

1 <= len(s) <= 100

Output Format

Print the reversed string.

Sample Input 0

fdsrd
Sample Output 0

drsdf
Explanation 0

Self Explanatory
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    string s;
    cin>>s;
    reverse(s.begin(), s.end()); 
    cout<<s;
    return 0;
}
