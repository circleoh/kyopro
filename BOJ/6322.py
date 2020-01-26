#https://www.acmicpc.net/problem/6322

import math
inputList = []

def solve(x, y, pos) :
  if pos == 2:
    return x ** 2 + y ** 2
  return y ** 2 - x ** 2

while 1:
  k = list(map(int, input().split(' ')))
  if k == [0, 0, 0]:
    break;
  else:
    inputList.append(k)

length: int = len(inputList)
triangle_list = ['a', 'b', 'c']

for i in range(length) :
  square = 0
  other = []


  for j in range(0, 3) :
    if inputList[i][j] == -1:
      pos = j
    else:
      other.append(inputList[i][j])

  square = solve(other[0], other[1], pos)


  print("Triangle #{}".format(i+1))
  if square <= 0:
    print("Impossible.")
  else:
    print(triangle_list[pos], "= {0:.3f}".format(math.sqrt(square)))
  print()