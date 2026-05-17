def isEqual(x,y):
	return x==y
	
def add(x,y):
	return x+y
	
def subtract(x,y):
	return add(x,-y)

def multiply(x,y,z=0):#doesn't work for 0
	if(isEqual(z,0)):
		z=x
	if(isEqual(y,1)):
		return x
	return multiply(add(x,z),subtract(y,1),z)
	
	
print(multiply(3,1))
	
	
