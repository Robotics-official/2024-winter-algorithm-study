N = int(input())

cnt = [0] * 10001

for i in range(N):
    cnt[int(input())] += 1

for i in range(1, 10001):
    for j in range(cnt[i]):
        print(i)