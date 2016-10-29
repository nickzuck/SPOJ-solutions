a = [11, 12, 13, 14, 15, 21, 22, 23, 24, 24, 25, 31, 32, 33, 34, 35, 41, 42, 43, 44, 45, 51, 52, 53, 54, 55]
for _ in range(input()):
    s = raw_input()
    ans = []
    for i in s:
        if i != ' ':
            ans.append(str(a[ord(i) - 65]))
    print " ".join(ans)
