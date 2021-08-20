from math import *
m = int(input(""))
def f(x):
  aux = cos(m*x)-x
  return aux

TOL = 10**(-15)
NMAX = 1001
a = -1.0
b = 1.0
i = 1
FA = f(a)
while i <= NMAX:
  p = 0.5 * (a + b)
  FP = f(p)
  if (FP == 0 or (b - a) / 2 < TOL):
    break
  i = i + 1
  if (FA * FP > 0):
    a = p
    FA = FP
  else:
    b = p
print(p)
#print(p < 10**(-8))
#if (i == NMAX +1):
#  print(-1)
