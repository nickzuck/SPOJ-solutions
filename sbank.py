t = input () 
for i in range (t) :
	n = input ()  
	d = dict ()
	for j in range(n) : 
		key = raw_input () 
		if key in d :
			d[key] += 1
		else :
			d[key] = 1 
	raw_input () 
	for key in sorted(d):
		print key, d[key]
	print("")