arr = input()
l = len(arr)
count = 0

for idx in range (l) :
	if arr[idx] == 'G' :
		for t_idx in range (idx, l) :
			if arr[t_idx] == 'T' :
				for p_idx in range(t_idx, l) :
					if arr[p_idx] == 'P' :
						for c_idx in range(p_idx, l) :
							if arr[c_idx] == 'C' :
								count += 1

print(count)
