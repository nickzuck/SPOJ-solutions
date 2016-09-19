# IDEA: Divide the sorted array from a point and
# find the number of pairs less than the current 
# value at the index, taking advantage of the sorted array
def sumPairLessThan(v, n, S):
    i = 0 
    j = n 
    count = 0 
    while i < j : 
        # Check the property of triangle
        if v[i] + v[j] < S :
            count += j - i 
            i += 1 
        else:
            j -= 1
    return count

def solve(v, n):
    count  = 0 
    v.sort()
    i = n-1
    while(i >= 2):
        count += sumPairLessThan(v[0:i], i-1 , v[i])
        i -= 1 
    return count

while True:
    n = input()
    if n == 0 :
        exit()
    arr = map(int , raw_input().split())
    print solve(arr, n)
