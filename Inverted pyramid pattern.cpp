/*
Print hollow half inverted pyramid pattern using '*'. See example for more details.

Input Format

First and only line of input contains a single integer N - the size of the pyramid.

Constraints

1 <= N <= 50

Output Format

For the given integer, print hollow half inverted pyramid pattern.

Sample Input 0

5
Sample Output 0

* * * * *
*     *
*   *
* *
*
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
    for(int i=N;i>0;i--)
    {
        if(i==1 || i==N)
            for(int j=1;j<=i;j++)
            {
               cout<<"* ";
            }
        
        else
        {
            for(int j=1;j<=i;j++)
            {  
                if(j==1 || j==i)
                   cout<<"* ";
                else
                   cout<<"  ";
            }
        }
       cout<<endl;
    }             
  
   
    return 0;
}
              
