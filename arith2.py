t = input () 
for i in range(t) :
	raw_input () 
	n = raw_input().split () 
	b = 0
	for i in range(len(n)) : 
		if i == 0 :
			a = int(n[0])
		elif i%2 == 0 :
			if b == "+" : 
				a = a+int(n[i])
				b = 0 
			elif b == "*" :
				a = a*int(n[i])
				b = 0
			elif b == "/":
				a = a / int(n[i])
				b = 0
			elif b == "-":
				a = a - int(n[i])
				b = 0
			
		else : 
			b = n[i]
	print a 
			 