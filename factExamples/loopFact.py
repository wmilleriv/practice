def fact(n):
    product=1
    for i in range(1,n+1):
        #product*=i
        product=product*i

    return product

print("Enter an integer: ")
k=input()
print(str(fact(int(k))))

