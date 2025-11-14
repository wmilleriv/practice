import random
number=random.randint(0,1000)

print("Guess an integer between 0 and 1000: ")
guess=int(input())
while guess != number:
    if guess < number:
        print("Too low, guess again: ")
        guess=int(input())
    if guess > number:
        print("Too high, guess again: ")
        guess = int(input())

print("congratulations, you win")
