
"""
# ravi0213's solution 
def solve(idx, wasZero, n):
    if idx == n:
        return 1 
    c1 = solve(idx+1, False, n)
    c2 = 0
    if not wasZero:
        c2 = solve(idx+1, True, n)
    return c1 + c2
"""

# This solution must give runtime error, 
# due to maximum recursion depth limit exceeded
fib = [0 for i in range(100002)]
fib[0] = 1 
fib[1] = 2
fib[2] = 3
lastFound = 2
def fibonacci(n):
    c1 = fib[n]
    if c1 == 0:
        for i in range(lastFound+1, n+1):
            fib[i] = fib[i-1] + fib[i-2]
        c1 = fib[n]
        return c1
    else :
        return c1
        
# The above code will give the answer as the 
#fibonacci series so we should calculate the fibonacci 
n = input()
print fibonacci(n)
