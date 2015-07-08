t =input()
for i in range(t):
  n,m = map(int,raw_input().split()) 
  a = map(int,raw_input().split())
  a.sort()
  s = int(0)
  for i in range(m):
    if a[i]>0:
      break
    s += a[i] 
  s = -s 
  print s 
  
