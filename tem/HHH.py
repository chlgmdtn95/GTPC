def chk_cent(num_list) :
	s = 0 
	e = 0

	for i in range (20) :
		if num_list[i] == 1 :
			s = i
			break
	for i in range (20) :
		if num_list[19 - i] == 1 :
			e = 19 - i
			break
	for i in range(20) :
		if num_list[i] == 0 :
			if i > s :
				if i < e :
					return (0)
	return (1)


num_list = list(map(int, input().split()))
print(chk_cent(num_list))
	
