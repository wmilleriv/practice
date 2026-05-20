def isEqual(x,y):
	return x==y

def add(x,y):
	return x+y
	
def subtract(x,y):
	return add(x,-y)
		
def lessThan(x,y):
	if(isEqual(y,0)):
		return False
	if(isEqual(x,0)):
		return True
	return(lessThan(subtract(x,1),subtract(y,1)))

def multiply(x,y,z=0):
	if isEqual(x,0) or isEqual(y,0):
		return 0
	if(isEqual(z,0)):
		z=x
	if(isEqual(y,1)):
		return x
	return multiply(add(x,z),subtract(y,1),z)
	
def divide(x,y,z=0):
		if(lessThan(x,y)):
			return z
		if isEqual(x,0):
			return add(z,1)
		return divide(subtract(x,y),y,add(z,1))
	
def exponentiate(x,y, z=0):
	if(isEqual(y,0)):
		return 1
	if(isEqual(z,0)):
		z=x
	if(isEqual(y,1)):
		return x
	return exponentiate(multiply(x,z),subtract(y,1), z)
	
def menu():
	print("Non-looping calculator app")
	print("--------------------------")
	print("1) Addition")
	print("2) Subtraction")	
	print("3) Multiply")
	print("4) Divide")
	print("5) Exponentiate")
	print("6) Quit")
	
	operation=input()
	if isEqual(operation,6):
		sys.quit()
	if(operation<1 or operation >6):
		print("Invalid operation selected")
