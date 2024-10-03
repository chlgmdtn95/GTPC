def ss(a, b, c, d, spend, income):
	if a == 'income' :
		income[int(b) - 1] += int(d)
	elif a == 'outcome' :
		spend[int(b) - 1] += int(d)


if __name__ == '__main__' :
	spend = [0 for _ in range (12)]
	income = [0 for _ in range (12)]

	num = int(input())
	for _ in range (num) :
		a, b, c, d = input().split()
		ss(a, b, c, d, spend, income)

	for i in range (12) :
		print(str(i + 1) + ' ' + str(income[i]) + ' ' + str(spend[i]) + ' ' + str(income[i] - spend[i]))


