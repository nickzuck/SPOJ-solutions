import random
try:
	arr = []
	while(True):
		a = raw_input().strip()
		arr.append(a)
except EOFError:
	pass
length = len(arr)
index = random.randint(0,length-1)
print arr[index]