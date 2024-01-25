N = int(input())
arr = [int(input()) for i in range(N)]
print(*sorted(arr)[::-1], sep='\n')