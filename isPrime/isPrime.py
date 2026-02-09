
def isPrime(n,knownPrimes):
    for num in knownPrimes:
        if n%int(num)==0:
            return False
    return True


def saveList(primes):
    with open('primes.txt','a') as f:
        for item in primes:
            f.write(str(item) + " ")

def read():
    knownPrimes=[]
    with open('primes.txt','r') as f:
        for prime in f.read().split():
            knownPrimes.append(prime)
    return knownPrimes;
    
knownPrimes=read()
newPrimes=[]
for i in range((int(knownPrimes[-1])+2),int(knownPrimes[-1])+1000):
    if(isPrime(i, knownPrimes)):
        newPrimes.append(i)
saveList(newPrimes)


