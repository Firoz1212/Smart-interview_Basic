/*
Print half diamond pattern using '*'. See example for more details.

Input Format

First and only line of input contains a single integer N.

Constraints

1 <= N <= 50

Output Format

For the given integer, print the half diamond pattern.

Sample Input 0

5
Sample Output 0

*
**
***
****
*****
****
***
**
*
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
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=N-1;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
