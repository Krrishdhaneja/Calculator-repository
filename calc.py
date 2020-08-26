import sys

k=str(input("any calculations u want to do(yes/no):"))
if "yes" in k:
    print("ok")
else:
    sys.exit()
d=int(input("1st num. :"))
kd=int(input("2nd num. :"))
o=str(input("operator?(type help to get info about all operators) : "))
if "+" in o or "plus" in o:
    print(d+kd)
elif "-"in o or "minus" in o:
    print(d-kd)
elif "x" in o or "multiply" in o:
    print(d*kd)
elif "/" in o or "divide" in o:
    print(d/kd)
elif "^" in o or "exponentiation" in o:
    print(d**kd)
elif "help" in o:
    print("plus(+)")
    print("minus(-)")
    print("multiply(x)")
    print("divide(/)")
    print("exponentiation(^)")
    
