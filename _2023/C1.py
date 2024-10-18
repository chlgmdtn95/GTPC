def chk_in(i, j, n, c) :
	ret = False
	ti = i - c
	tj = j - c
	if (ti*ti + tj*tj > c*c) :
		return False
	if j > c :
		if i < ((j-c)/(3**(1/2)) + c) :
			if i > ((j-c)/(3**(1/2))*(-1) + c) :
				return False
	return True

count = 0
n = int(input())
c = n/2
for i in range (n) :
	for j in range (n) :
		if chk_in(i, j, n, c) == False :
			continue
		if chk_in(i+1, j, n, c) == False :
			continue
		if chk_in(i, j+1, n, c) == False :
			continue
		if chk_in(i+1, j+1, n, c) == False :
			continue
		count+= 1
			
print(count)
