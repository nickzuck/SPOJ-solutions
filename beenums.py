while True : 
    n = input () 
    if n == -1 :
        break 
    n -= 1
    a = 6
    while n > 0 :
 	n -= a 
	a += 6 
    if n == 0 :
	print "Y"
    else : 
	print "N"