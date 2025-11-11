def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)

print("Enter an Integer")

k=input()
print(str(fact(int(k))))
