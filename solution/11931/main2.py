MAX = 1000000
cnt = [0] * 2000001

N = int(input())
for i in range(N):
    x = int(input())
    cnt[x + MAX] += 1

for i in range(MAX * 2, -1, -1):
    if cnt[i]:
        print(i - MAX)