import string
digs = string.digits + string.letters

def int2base(x, base):
  if x < 0: sign = -1
  elif x == 0: return digs[0]
  else: sign = 1
  x *= sign
  digits = []
  while x:
    digits.append(digs[x % base])
    x /= base
  if sign < 0:
    digits.append('-')
  digits.reverse()
  return ''.join(digits)

while True:
    try :
	str , base , destination = raw_input().split() 
	str = str.lstrip()
	base = int(base)
	destination = int(destination)
	a = int(str,base) 
	#print a
	store = int2base(a, destination)
	store = store.upper()
	if len(store) >7 :
	    ans = 'ERROR'
	    print ans.rjust(7) 
	else :
	    print store.rjust(7)
	 
    except :
	break 
