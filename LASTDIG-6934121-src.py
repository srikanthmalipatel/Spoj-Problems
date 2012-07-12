n = input()

def lastdig(n):
    return int(str(n)[-1])

for t in xrange(n):
    a, b = [long(x) for x in raw_input().split()]
    if b==0:
        print 1
        continue
    d = lastdig(a)
    digits = [d]
    n = a
    while True:
        n = n*a
        d = lastdig(n)
        if d not in digits:
            digits.append(d)
        else:
            break
    print digits[b%len(digits)-1]