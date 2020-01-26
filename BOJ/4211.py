#https://www.acmicpc.net/problem/4211

class Light:
  def __init__(self, r, c, rdirec, cdirec):
    self.r = r
    self.c = c
    self.rdirec = rdirec
    self.cdirec = cdirec

  def movePos(self, sheet):
    self.r += self.rdirec
    self.c += self.cdirec
    status = sheet.IsOccupied(self.r, self.c)

    if status == 0:
      pass

    elif status == 1:  # swap
      if self.rdirec == 0:  # going right/left
        self.rdirec, self.cdirec = -1 * self.cdirec, 0
      elif self.cdirec == 0:
        self.rdirec, self.cdirec = 0, -1 * self.rdirec

    else:  # status == -1
      self.rdirec, self.cdirec = self.cdirec, self.rdirec

  def showPos(self):
    print("({}, {})".format(self.r, self.c))


class Sheet:
  positiveMirror = []
  negativeMirror = []

  def __init__(self):
    row, column, m, n = list(map(int, input().split(' ')))

    self.row = row
    self.column = column
    self.m = m
    self.n = n

    for i in range(m):  # / mirror
      self.positiveMirror.append(list(map(int, input().split(' '))))

    for i in range(n):  # / mirror
      self.negativeMirror.append(list(map(int, input().split(' '))))

  def IsOccupied(self, x, y):
    if [x, y] in self.positiveMirror:
      return 1
    elif [x, y] in self.negativeMirror:
      return -1
    else:
      return 0

def main(caseNum):
  sheet = Sheet()
  go = Light(1, 1, 0, 1)
  come = Light(sheet.row, sheet.column, 0, -1)

  goPath = list()
  comePath = list()
  counter = 1;

  while True:
    if counter < 2 * sheet.column * sheet.row:
      goPath.append([go.r, go.c])
      go.movePos(sheet)

      if not ((go.r, go.c) != (sheet.row, sheet.column) and 0 < go.r < sheet.row + 1 and 0 < go.c < sheet.column + 1):
        goPath.append([go.r, go.c])
        break
    else:
      break

  if [sheet.row, sheet.column] in goPath:
    print("Case {}: 0".format(caseNum))
    return 0

  while True:
    if counter < 2 * sheet.column * sheet.row:
      comePath.append([come.r, come.c])
      come.movePos(sheet)

      if not ((come.r, come.c) != (1, 1) and 0 < come.r < sheet.row + 1 and 0 < come.c < sheet.column + 1):
        comePath.append([come.r, come.c])
        break

    else:
      break

  both = list()

  for i in goPath:
    if i in comePath:
      both.append(i)

  if len(both) == 0:
    print("Case {}: impossible".format(caseNum))
    return 0;

  count = len(both)
  arg = [0, 0];

  for i in range(sheet.column):
    for j in range(sheet.row):
      if [i, j] in both:
        arg[0] = i;
        arg[1] = j;

  print("Case {}: {} {} {}".format(caseNum, count, arg[0], arg[1]))
  return 0

# run
cnt = 1
while 1:
  main(cnt)
  cnt += 1