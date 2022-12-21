#Given a string, compress the given string. See example for more details.

#Input Format

#Input contains a string S, consisting of lowercase and uppercase characters.

#Constraints

#1 <= len(S) <= 100

#Output Format

#Print the compressed string.

#Sample Input 0

#aaaBBBBhhhekkL
#Sample Output 0

#a3B4h3e1k2L1
#Explanation 0

#In the given string, a is repeating for 3 times continuosly. So after compression it becomes a3.
#Similarly,
#B is repeating for 4 times - B4
#h is repeating for 3 times - h3
#e is repeating for 1 times - e1
#k is repeating for 2 times - k2
#L is repeating for 1 times - L1
string=str(input())
ind = 0
def compress(string):
    global ind
    cstr = ""
    l = len(string)
    while (ind != l):
        count = 1

        while ((ind < (l-1)) and (string[ind] == string[ind+1])):
            count = count + 1
            ind = ind + 1

        
        else:
            cstr = cstr + str(string[ind]) + str(count)

        ind += 1

    return cstr
      
print(compress(string))
