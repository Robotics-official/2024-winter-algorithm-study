N, K = map(int, input().split())
answer = 0

def chk(a, b):
    for i in range(2):
        if a % 10 == b:
            return True
        a //= 10
    return False

for i in range((N + 1) * 3600):
    hh, mm, ss = i // 3600, i // 60 % 60, i % 60
    if chk(hh, K) or chk(mm, K) or chk(ss, K):
        answer += 1

print(answer)