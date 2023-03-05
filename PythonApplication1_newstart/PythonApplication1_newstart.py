total = int(input())
T = int(input())

price = 0
for i in range(T):
	a,b = map(int, input().split())
	price += (a*b)

if total == price:
	print('Yes')
else:
	print('No')