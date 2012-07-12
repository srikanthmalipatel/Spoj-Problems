from math import floor
 
def kthnumber(k):
    if k > 2:
        num = "%i" % int((floor( (5 * (k - 1) + 3) / 2.0 )))
    else:
        if k == 1:
            num = "1"
        elif k == 2:
            num = "4"
 
    if k % 2 == 0:
        num += "42"
    else:
        num += "92"
 
    return num
 
 
 
t = int(raw_input())
for c in xrange(0, t):
    print kthnumber(int(raw_input()))
