/*
Print rectangle pattern. See example for more details.

Input Format

First and only line of input contains a single integer N - the size of the rectangle.

Constraints

1 <= N <= 50

Output Format

For the given integer, print rectangle pattern as shown in example.

Sample Input 0

5
Sample Output 0

5432*
543*1
54*21
5*321
*4321
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
    for(int i=1;i<=N;i++){
        for(int j=N;j>=1;j--){
            if(i==j){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}
