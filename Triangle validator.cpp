/*
Given the length of 3 sides of a triangle, check whether the triangle is valid or not.

Input Format

First and only line of input contains three integers A, B, C - length of sides of the triangle.

Constraints

1 <= A, B, C <= 109

Output Format

Print "Yes" if you can construct a triangle with the given three sides, "No" otherwise.

Sample Input 0

4 3 5
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
    int A,B,C;
    cin>>A>>B>>C;
    if((A+B)>C&&(A+C)>B&&(B+C)>A)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
  
