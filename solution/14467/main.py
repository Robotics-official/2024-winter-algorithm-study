N = int(input())
cow = [-1] * 11
ans = 0
for i in range(N):
    a, b = map(int, input().split())
    if cow[a] != -1 and cow[a] != b:
        ans += 1
    cow[a] = b
print(ans)