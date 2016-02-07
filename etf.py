from math import sqrt

# Euler totient function algorithm taken from topcoder
def totient(n):
    result = n 
    for i in range(2, int(sqrt(n))):
        if (n%i == 0):
            result -= result/i
            while(n%i == 0):
                n /= i
    if (n>1):
        result -= result/n
    return result

for t in range(input()):
    n = input()
    print totient(n)
