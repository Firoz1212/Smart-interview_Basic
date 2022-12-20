/*

Print unique elements of the array in the same order as they appear in the input.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains a single integer N - the size of array and second line contains array elements.

Constraints

1 <= N <= 100
0 <= ar[i] <= 109

Output Format

Print unique elements of the array.

Sample Input 0

7
5 4 10 9 21 4 10
Sample Output 0

5 9 21
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        int n,c=0;
    cin>>n;
    int A[n];
    int i, j, k;
       for(i=0;i<n;i++)
            {
         cin>>A[i];
        }
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=0,k=n; j<k+1; j++)
        {
          
            if (i!=j)
            {
               if(A[i]==A[j])
              {
                 c++;
               }
             }
        }
       if(c==0)
        {
         cout<<A[i]<<" ";
        }
    }
       cout<<endl<<endl;

    return 0;
}

