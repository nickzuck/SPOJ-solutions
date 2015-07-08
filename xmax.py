N = input ()
A= list () 
for i in range(N) :
	temp  = input()
	A.append (temp) 
xor = A[0]
for i in range (1,N):
	xor = xor ^ A[i] 
print xor 