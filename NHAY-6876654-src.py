def print_all(n,s):
	start_pos = s.find(n)
	while start_pos > 0:
		print start_pos
		start_pos = s.find(n,start_pos+1)
	print 
 
 
while True:
    try:
		n_len = raw_input()
		ned = raw_input()
		stack = raw_input()
		print_all(ned,stack)
    except:
        break


