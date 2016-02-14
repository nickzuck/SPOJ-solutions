def gcd(a ,b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

for t in range(input()):
    avg = input()
    temp = str(avg).split(".")
    #print temp
    if len(temp) == 1 :
        # integer number 
        print "1"
    else :
        a = len(temp[1])
        n1 = 10 ** a
        if a== 2 or a== 4:
            n1 -= 1
        n2 = avg*n1
        print n1/gcd(n1, n2)
