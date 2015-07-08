t= input () 
for i in range(t):
	raw_input () 	
	n = raw_input().split() 
	#print n 
	try :
		a = int (n[0])
	except:
		a = n[0]
	try: 
		b = int(n[2])
	except : 
		b = n[2]
	try : 
		c = int(n[4])
	except :
		c = n[4] 
	#print type(a)
	if type(a)== str :
		a = c - b 
	elif type(b) == str: 
		b = c-a 
	elif type(c) == str:
		c = a+b
	print a,
	print '+',
	print b,
	print '=',
	print c