n = input()
arr = map(int, raw_input().split())
k = input()
m = max(arr[:k])
print m,
for i in range(n-k):
    if arr[i+k] > m:
        m = arr[i+k]
    print m,
