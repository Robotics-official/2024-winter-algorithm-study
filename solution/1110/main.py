N = int(input())
cur_value = N
cnt = 0

while True:
    cnt += 1
    units, tens = cur_value % 10, cur_value // 10
    nxt_value = units * 10 + (units + tens) % 10
    if N == nxt_value:
        break
    cur_value = nxt_value

print(cnt)