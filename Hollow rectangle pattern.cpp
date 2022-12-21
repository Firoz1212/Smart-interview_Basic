/*
Print hollow rectangle pattern using '*'. See example for more details.

Input Format

Input contains two integers W - width of the rectangle and L - length of the rectangle.

Constraints

2 <= W <= 50
2 <= L <= 50

Output Format

For the given integers W and L, print the hollow rectangle pattern.

Sample Input 0

5 4
Sample Output 0

*****
*   *
*   *
*****
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
    int W,L;
    cin>>W>>L;
    for(int i=1;i<=L;i++){
        for(int j=1;j<=W;j++){
            if(i==1||i==L||j==1||j==W){
                cout<<"*";
            }
                else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }
    return 0;
}
