/*
Find a duplicate element in the given array of integers. There will be only a single duplicate element in the array.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains size of the array - N and second line contains the elements of the array.

Constraints

2 <= N <= 100
0 <= ar[i] <= 109

Output Format

Print the duplicate element from the given array.

Sample Input 0

6
5 4 10 9 21 10
Sample Output 0

10
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,N;
  cin>>N;
    int A[N];
  for(i=0;i<N;i++)
  {
   cin>>A[i];
  }
  for(i=0; i<N; i++)
   {
    for(j=i+1;j<N;j++)
    {
    if(A[i]==A[j])
    {
    cout<<A[i]<<endl;
    }
   }
   }
    return 0;
}
