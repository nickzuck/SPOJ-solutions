while True:
    try:
        s = raw_input().strip()
    except EOFError:
        break
    
    #C++ Program 
    if '_' in s:
        ans = []
        valid = True
        emptyAns = True
        wasUnderscore = False
        n = len(s)
        i = 0 
        while i < n:
            if s[i].isupper():
                valid = False 
                break 
            elif s[i] == '_':
                if emptyAns or wasUnderscore :
                    valid = False 
                    break
                else:
                    try:
                        i +=1
                        ans.append(s[i].upper())   
                        wasUnderscore = True
                    except IndexError:
                        valid = False
                        break
            else:
                emptyAns = False
                wasUnderscore = False
                ans.append(s[i])

            # increment for the loop
            i += 1

        # Print the answer
        if valid:
            print "".join(ans)
        else:
            print "Error!"

    # Java Program 
    else:
        ans = []
        valid = True
        emptyAns = True
        n = len(s)
        i = 0
        while i < n :
            if s[i].isupper():
                if emptyAns:
                    valid = False
                    break
                else:
                    ans.append("_")
                    ans.append(s[i].lower())
            else:
                emptyAns= False
                ans.append(s[i])
            # increment for the loop
            i += 1

        # Print the answer
        if valid :
            print "".join(ans)
        else:
            print "Error!"
