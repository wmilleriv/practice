def isPrime(n):
    if(n<3):
        return True
    if(n%2==0):
        return False
    for i in range(3,int((n**(1/2)))+1, 2):
        if n%i==0:
            return False
    return True

print("Enter an integer: ")
number=input()
if(isPrime(int(number))):
    print(number + " is prime")
else:
    print(number + " is not prime")
