/*
Print pyramid pattern using '*'. See example for more details.

Input Format

First and only line of input contains a single integer N - the size of the pyramid.

Constraints

1 <= N <= 50

Output Format

For the given integer, print pyramid pattern.

Sample Input 0

5
Sample Output 0

    *
   ***
  *****
 *******
*********
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
        for(int l=N-i;l>0;l--){
            cout<<" ";
        }
            for(int j=1;j<=(2*i-1);j++){
                cout<<"*"; 
            }
        cout<<endl;
    }
    return 0;
}
