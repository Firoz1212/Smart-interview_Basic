/*
Given a string, check if it contains only digits.

Input Format

Input contains a string S, consisting of ascii characters.

Constraints

1 <= len(S) <= 100

Output Format

Print "Yes" if string contains only digits, "No" otherwise.

Sample Input 0

123456786543
Sample Output 0

Yes
Explanation 0

Self Explanatory

Sample Input 1

"Smart-Interviews"
Sample Output 1

No
Explanation 1

Self Explanatory
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int allDigits(string str, int len)
{
int c=0;
    for (int i = 0; i < len; i++) {
      if (str[i] >= '0' && str[i] <= '9'){
         c++;
      }

    }
    return c;
}

// Driver code
int main()
{
    string s;
    cin>>s;
    int l = s.length();

    if (allDigits(s, l)==l)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
