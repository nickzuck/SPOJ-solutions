def si (p , r , t , c ): 
    cumint = 0 ; 
    v = p 
    #print "in si "
    v = int(v) 
    #print v 
    for i in range(t):
	b = v * r
        b = int(b)
        v = v - c 
        cumint+= b 
	#print b , v , cumint
    return v+cumint

def com(p , r , t , c) : 
    v = p  
    v = int (v)
    #print "In com"
    for i in range(t) : 
        b = v*r
	b = int(b) 
	v = v + b -c 
	#print b , v 
    return v 
	

m = input ()
for i in range(m) :
    p = input()
    p = int (p)  
    t = input () 
    n = input () 
    max = 0 
    for j in range(n) : 
	f , r , c = map(float,raw_input().split())
        f = int (f)
        c = int(c) 
	if (f == 1):
	    #print"Value of p is ", p 
	    ans = com(p , r , t, c) 
	    if max < ans : 
	        max = ans 
	elif f == 0  : 
	    #print "Value of p is" , p 
	    ans = si(p , r , t , c)
            if max < ans : 
		max = ans

    print max 
