#https://atcoder.jp/contests/abc133/tasks/abc133_b

n,d = map(int, input().split())
data = []
ans = 0
for _ in range(n):
  data.append(list(map(int,input().split())))
for i in range(n):
  for r in range(i+1, n):
    norm = 0
    for k in range(d):
      diff = abs(data[i][k]-data[r][k])
      norm += diff ** 2
    for s in range(norm+1):
      if s**2 == norm: ans += 1
print(ans)