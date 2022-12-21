/*
Print right-angled triangle pattern. See example for more details.

Input Format

First line of input contains a single integer N - the size of the triangle.

Constraints

1 <= N <= 50

Output Format

For the given integer, print the right-angled triangle pattern.

Sample Input 0

5
Sample Output 0

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
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
    int N,v,d;
    cin>>N;
    for(int i=1;i<=N;i++){
        v=i;
        d=N-1;
        for(int j=1;j<=i;j++){
            cout<<v<<" ";
            v+=d;
            d--;
        }
        cout<<endl;
    }
    return 0;
}
