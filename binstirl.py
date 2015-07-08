d = input () 
for i in range(d):
    n,k = map(int , raw_input().split())
    if (n-k)&((k-1)/2):
	print 0 
    else:
	print 1 