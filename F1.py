arr = input()
flag = 0
count = 0

for idx in range (len(arr)) :
	if flag == 0 :
		if arr[idx] == '0' :
			count += 1
			flag = 1
	if flag == 1 :
		if arr[idx] == '1' : 
			flag = 0

print (count)
