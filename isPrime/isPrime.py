import csv

def isPrime(n):
    for num in nums:
        if n%int(num)==0:
            return False
    return True

nums=[]
with open('primes.txt','r') as p:
    reader=csv.reader(p) 
    for row in reader:
        nums.extend(row)
 
primes=[]
for i in range((int(nums[-1])+2),(int(nums[-1])**2)):
    if(isPrime(i)):
       primes.append(i)

with open('primes.txt','a') as p:
    for prime in primes:
       p.write(",")
       p.write(str(prime))
