import math
def cal(m):
  sum = 0
  for x in lst:
    sum += ((2*m) + x) * ((2*m) + x)
  return sum

tt = int(input())
while tt > 0:
  w = input().split()
  n = int(w[0])
  area = int(w[1])
  w = input().split()
  lst = []
  for x in w:
    lst.append(int(x))
  l = 0
  r = area
  res = -1
  while l<=r:
    m = (l+r)/2
    # print(cal(m), "  ", l, "   ", r)
    if cal(m) <= area:
      res = m
      l = m+0.5
    else:
      r = m-0.5
  print(math.ceil(res))
  # print(res)
  tt-=1