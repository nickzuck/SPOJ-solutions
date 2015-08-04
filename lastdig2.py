t = input() 
for i in range (t) : 
	a , b= map(int,raw_input().split(" "))
	base = a%10 
	if (b == 0):	
		print 1 
	else:
		if (base == 0 or base == 1 or base == 5 or base == 6):
			#print "in special case of base"
			print base
		else :
			exp = b%4
			if (exp == 0):
				ans = base**4 
				print ans%10 
			else:
				ans = base**exp 
				print ans%10
			
