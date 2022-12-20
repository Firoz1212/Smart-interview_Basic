/*
Given a matrix of size N x M, print transpose of the matrix.

Input Format

First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-109 <= ar[i] <= 109

Output Format

Print the transposed of the given matrix.

Sample Input 0

2 2
5 -1
19 8
Sample Output 0

5 19
-1 8
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,M;
    cin>>N>>M;
    int A[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>A[i][j];
        }
    }
    for(int j=0;j<M;j++){
        for(int i=0;i<N;i++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
