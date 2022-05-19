
def perm(lst):
	# find pivot
	i = len(lst) - 1
	while i > 0 and lst[i - 1] >= lst[i]:
		i -= 1
	if i <= 0:
		return lst
	
	# find pivot successor
	j = len(lst) - 1
	while lst[j] <= lst[i - 1]:
		j -= 1
	lst[i - 1], lst[j] = lst[j], lst[i - 1]
	
	# reversing string
	lst[i : ] = lst[len(lst) - 1 : i - 1 : -1]
	return lst

n =list(input("Ingrese el numero"))
 
 
print('El numero ingresado es:', n) 

print('La siguiente permutacion lexicografica es:', perm(n))


