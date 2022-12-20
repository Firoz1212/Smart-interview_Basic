/*
Print array in reverse order.
Note: Try solving this using recursion. Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= N <= 100
0 <= ar[i] <= 1018

Output Format

Print the given array in reverse order.

Sample Input 0

5
2 19 8 15 4
Sample Output 0

4 15 8 19 2
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    
    for(int i=(n-1);i>=0;i--)
        cout<<A[i]<<" ";
    
    return 0;
}
