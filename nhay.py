import re
while(True):
    try:
        leng = input()
        needle = raw_input()
        haystack = raw_input()
        copyNeedle = '(?=' + needle + ')'
        ans = [m.start() for m in re.finditer(copyNeedle, haystack)]
        for i in ans :
            print i
        if (not len(ans)):
            print 
    except EOFError:
       break 
