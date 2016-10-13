""" For complete appraoch see M3TILE.png, a good explanation for this is given properly
    The final formula comes out to be x(n) = 4*x(n-2) - x(n-4) """

x = [1, 0 , 3, 0]
for n in range(4, 32):
    x.append(4*x[n-2] - x[n-4])
while True:
    n = input()

    if n == -1 :
        break 
    
    else :
        print x[n]        
