a = int(input("Ingrese primer numero:  "))
b = int(input("Ingrese segundo numero: ")) 

if b is not 0: 
    q = int(a/b)
    r=a%b
    
    while r:
        a=b
        b=r
        r=a%b
    print('El maximo comun divisor es:', abs(b)) 
    
else: 
    print('El maximo comun divisor es:', abs(a))
