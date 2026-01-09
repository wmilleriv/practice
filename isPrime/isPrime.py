import csv

def isPrime(n):
    for num in nums:
        if n%int(num.strip())==0:
            return False
    print(str(n) + "is prime")
    return True


def saveList(primes):
    with open('primes.csv','a',newline='') as p:
        writer=csv.writer(p)
        writer.writerow(primes)

nums=[]
with open('primes.csv','r',newline='') as p:
    reader=csv.reader(p) 
    for row in reader:
        nums.extend(row)
 

for i in range((int(nums[-1])+2),(int(nums[-1])**2)):
    primes=[]
    for j in range(1000):
        if(isPrime(i)):
            primes.append(i)
    saveList(primes)


def saveList(primes):
    with open('primes.csv','a',newline='') as p:
        writer=csv.writer(p)
        writer.writerow(primes)
