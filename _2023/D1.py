n, m = map(int, input().split())
hay = input()

arr = [[" "] for _ in range (n)]
for i in range (n) :
	arr[i] = input()

x_direction = [0,1,1,1,0,-1,-1,-1]
y_direction = [-1, -1, 0, 1, 1, 1, 0, -1]

for i in range (n) :
	for j in range (m) :
		for d in range (8) :
			idx = 0
			ti = i
			tj = j
			while (hay[idx] == arr[ti][tj]) :
				if (idx == len(hay) - 1) :
					print (str(i), str(j), str(d))
					break
				idx= idx + 1
				ti = ti + y_direction[d]
				tj = tj + x_direction[d]
				if ti < 0 :
					break
				if tj < 0 :
					break
				if ti > n - 1 :
					break
				if tj > m - 1 :
					break
