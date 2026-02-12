
def isPrime(n,knownPrimes):
    for num in knownPrimes:
        if n%int(num)==0:
            return False
    return True


def saveList(primes):
    with open('primes.txt','a',encoding="utf-8", newline=None) as f:
        for item in primes:
            f.write((str(item) + " ").strip('\n'))

def read():
    knownPrimes=[]
    with open('primes.txt','r', encoding='utf-8', newline=None) as f:
        for prime in f.read().split():
            knownPrimes.append(prime)
    return knownPrimes;
    
knownPrimes=read()
newPrimes=[]
for i in range((int(knownPrimes[-1])+2),int(knownPrimes[-1])+100000):
    if(isPrime(i, knownPrimes)):
        newPrimes.append(i)
saveList(newPrimes)


