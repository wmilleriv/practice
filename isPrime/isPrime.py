
def isPrime(n):
    for num in nums:
        if n%num==0:
            return False
    return True

nums=[]
with open('primes.txt','r') as p:
    nums.append(p.read(1))
 
primes=[]
for i in range(1000):
    if(isPrime(count)):
       primes.add(count)

with open('primes.txt','a') as p:
       p.append(primes)
