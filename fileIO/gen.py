import random
import string

msg="Congratulations, you found the secret message"
chars=list(msg)


with open('msg1.txt', 'w') as file:
    x=0
    for i in range(10000):
        if(i%5==0 and x<len(chars)):
            file.write(chars[x])
            x+=1
        else:
            random_char =random.choice(string.ascii_letters)
            file.write(random_char)

