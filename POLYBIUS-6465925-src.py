for i in range(input()):
 for j in raw_input():
  j=ord(j)
  if j>73:j-=1
  if j>64:print 2*j-j%5-119,