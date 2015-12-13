for i in range(input()):
	x = input()
	if(x%2 == 0):
		print int(bin(x)[:1:-1],2)
	else:
		print x