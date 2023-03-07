list1 = []
a = 0
b = 0

for i in range(9):
	s = int(input())
	list1.append(s)
	if s > a:
		a = s
		b = i+1

print(a)
print(b)