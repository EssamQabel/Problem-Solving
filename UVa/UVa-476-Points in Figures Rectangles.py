class Rect:
  x1, y1, x2, y2 = [None] * 4
  id = ''
  def __init__(self, id, input_list):
    self.id = id
    self.x1 = input_list[0]
    self.y1 = input_list[1]
    self.x2 = input_list[2]
    self.y2 = input_list[3]

class Point:
  x, y = None, None
  id = ''
  def __init__(self, id, input_list):
    self.id = id
    self.x = input_list[0]
    self.y = input_list[1]

def check(point, rect):
  if min(rect.x1, rect.x2) < point.x < max(rect.x1, rect.x2) and min(rect.y1, rect.y2) < point.y < max(rect.y1, rect.y2):
    print("Point " + point.id + " is contained in figure " + rect.id)
    return True
  return False

rects, points = [], []
input_list = input().split()
idx = 1
while input_list[0] != '*':
  rects.append(Rect(str(idx), [float(i) for i in input_list[1:]]))
  idx += 1
  input_list = input().split()
input_list = input().split()
idx=1
while input_list[0] != "9999.9":
  points.append(Point(str(idx),[float(i) for i in input_list]))
  idx += 1
  input_list = input().split()

for point in points:
  contained = False
  for rect in rects:
    contained = max(check(point, rect), contained)
  if not contained:
    print("Point " + point.id + " is not contained in any figure")