/*   
Find maximum element from the given array of integers.

Input Format

First line of input contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= N <= 100
-109 <= ar[i] <= 109

Output Format

Print the maximum element of the given array.

Sample Input 0

5
-2 -19 8 15 4
Sample Output 0

15
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    
    for(int i=0;i<n;i++)
    {
        if(A[0]<A[i]){
            A[0]=A[i];
        }
    }
    cout<<A[0]<<endl;
    return 0;
}
