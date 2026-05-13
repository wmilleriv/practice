def comp(x,y):
	return x==y
	
def add(x,y):
	return x+y
	
def sub(x,y):
	return add(x,-y)
	
def mult(x,y):
	z=0
	for i in range(y):
		z=add(z,x)
	return z
	
def div(x,y):
	z=0
	for i in range(x,0,-y):
		x=sub(x,y)
		z=add(z,1)
	return z
	
def test():
	print("Enter first value: ")
	x=input()
	print("Enter second value: ")
	y=input()
	print("Compare: " + str(comp(int(x),int(y))))
	print("Add: " + str(add(int(x),int(y))))
	print("Subtract: " + str(sub(int(x),int(y))))
	print("Multiply " + str(mult(int(x),int(y))))
	print("Divide: " + str(div(int(x),int(y))))
	
	
test()
