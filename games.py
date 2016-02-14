def gcd(a ,b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

for t in range(input()):
    avg = raw_input()
    pos = avg.find(".")
    if pos == -1 :
        print 1
    else:
        p = 10 ** (len(avg)-pos-1)
        score = int(avg[:pos] + avg[pos+1:])
        print p/gcd(p, score)
