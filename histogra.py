def area(temp, stack):
    if len(stack) > 0:
        currentArea = arr[temp]*(i-stack[-1]-1)
    else:
        currentArea = arr[temp]*i
    return currentArea 


arr = map(int, raw_input().split())
n  = arr.pop(0)
while(n != 0):
   
    maxArea = 0
    currentArea = 0 
    stack = []

    i = 0 ;
    while(i < n):
        if len(stack) == 0:
            stack.append(i)
            i += 1 
        else:
            if arr[i] < arr[stack[-1]]:
                temp =stack.pop() 
                currentArea = area(temp , stack) 
                maxArea = max(maxArea, currentArea)
            else:
                stack.append(i)
                i += 1 

    # Calculate the area of the stack elements
    while(len(stack) > 0):
        temp = stack.pop()
        currentArea = area(temp, stack)
        maxArea = max(maxArea, currentArea)
    print maxArea
    arr = map(int, raw_input().split())
    n  = arr.pop(0)
