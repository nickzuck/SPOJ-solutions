for t in range(input()):
    n = input()
    s = ''
    temp = '65'
    while n:
        n, r = divmod(n, 2)  # divmod(a, b) returns (a//b , a%b)
        n -= 1-r 
        s = temp[r] + s
    print s
