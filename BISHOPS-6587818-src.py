import sys
while True:
    try:
        value = input()    
    except EOFError:
        break
    value = int(value)
    if value == 1:
        print(1)
    else:
       value = 2*value -2
       print(value)