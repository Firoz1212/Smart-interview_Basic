/*
Print sum of all odd elements in an array.

Input Format

First line of input contains N - the size of the array and second line contains array elements.

Constraints

1 <= N <= 100
-109 <= ar[i] <= 109

Output Format

Print sum of all odd elements of the given array.

Sample Input 0

5
6 9 8 4 3
Sample Output 0

12
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,sum=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        if(A[i]%2!=0)
        {
            sum+=A[i];
        }
        }
    cout<<sum<<endl;
    return 0;
}
