import sys
while 1:
    try:
        a = int(input())
    except EOFError:
        break 
    if a == 1:
        print(1)
    else:
        n = 2*a-2
        print(n)
sys.exit(0)