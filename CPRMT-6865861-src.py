def intersection(lst1, lst2):
    same = []
    if len(lst1) > len(lst2):
        for k in lst1:
            try: # checks if element k is in lst2
                lst2.remove(k)
                same.append(k)
            except:
                pass
    else:
        for k in lst2:
            try:
                lst1.remove(k)
                same.append(k)
            except:
                pass
    same.sort()
    return same
 
 
while True:
    try:
        inp1 = raw_input()
        inp2 = raw_input()
 
        common = intersection(list(inp1), list(inp2))
        print "".join(common)
    except:
        break

