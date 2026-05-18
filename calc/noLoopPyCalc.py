def isEqual(x,y):
	return x==y

def add(x,y):
	return x+y
	
def subtract(x,y):
	return add(x,-y)
		
def lessThan(x,y):
	if(comp(y,0):
		return false
	if(comp(x,0):
		return true
	return(lessThan(subtract(x,1),subtract(y,1)))


def multiply(x,y,z=0):#doesn't work for 0
	if(isEqual(z,0)):
		z=x
	if(isEqual(y,1)):
		return x
	return multiply(add(x,z),subtract(y,1),z)
	
def divide(x,y,z=0):
	
	
	
print(multiply(3,1))
	
	
