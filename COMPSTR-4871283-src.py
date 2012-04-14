t = int(input())
while t:
    a,b = input().split()
    l1 = len(a)
    l2 = len(b)
    i = 0
    count = 0
    if l1<=l2:
        l = l1
    else:
        l = l2
    while l:
        if a[i] == b[i]:
            count+=1
            #print(i)
        l-=1
        i+=1
    print(count)
    t-=1
    