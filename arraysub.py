n = input()
arr = map(int, raw_input().split())
k = input()
for i in range(n-k+1):
    print max(arr[i:i+k]),

