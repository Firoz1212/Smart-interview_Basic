#Given an array of integers, search a given key in the array using binary search.
#Note: Do not use any inbuilt functions/libraries for your main logic.
#(Try to practice both iterative and recursive codes for Binary Search)

#Input Format

##First line of input contains two integers, N - size of the array and K - search key. Second line contains the elements of the array.

#Constraints

#1 <= N <= 102
#0 <= ar[i] <= 109

#Output Format

#Print "true" if key is present in the array, otherwise, print false.

#Sample Input 0

#5 19
#2 19 23 35 38
#Sample Output 0

#true
#Explanation 0

#Self Explanatory
n,k=map(int,input().split())
arr=list(map(int,input().split()))
l=0
h=n-1

def BS(arr,l,h,k): 
    if h>=l: 
        mid=l+(h-l)//2
        if arr[mid]==k: 
            return mid 
        elif arr[mid]>k: 
            return BS(arr,l,mid-1,k) 
        else: 
            return BS(arr,mid+1,h,k) 
    else: 
        return -1
result=BS(arr,0,n-1,k) 

if result!=-1: 
    print("true") 
else: 
    print("false") 
