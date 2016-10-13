def calculate(diff, amount):
    valid = True
    if diff == 0:
        ans = 2
    elif diff % amount == 0:
        moves = diff /amount
        ans = moves/3
        moves %= 3
        ans += moves/2 
        moves %= 2
        ans += moves
    else:
        valid = False 
        ans = None
    return valid, ans
        
def newPrint(v, a):
    if v:
        print a
    else :
        print "No accounting tablet"

while True:
    po, amount, pe = map(int, raw_input().split())
    if po == 0 and amount == 0 and pe == 0:
        break 
    if pe >= po:
        temp = pe - po 
        valid, answer = calculate(temp, amount)
        newPrint(valid, answer)
    else :
        valid, answer = calculate(po-pe, amount)
        newPrint(valid, answer)
