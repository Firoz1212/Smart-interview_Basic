/*
Given a matrix of size N x M, print column-wise sum, separated by a newline.

Input Format

The first line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format

Print column-wise sum of the matrix, separated by newline.

Sample Input 0

2 2
5 -1
19 8
Sample Output 0

24
7

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,M,sum=0;
    cin>>N>>M;
    int A[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>A[i][j];
        }
    }
     for(int j=0;j<M;j++){
        for(int i=0;i<N;i++){
           sum=sum+A[i][j];
        }
         cout<<sum<<endl;
         sum=0;
    }
    return 0;
}
