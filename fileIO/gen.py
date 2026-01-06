import random
import string


MSG="Congratulations, you found the secret message."
ENCODED_SIZE=10000
chars=list(msg)
encodedMsg=""


with open('msg1.txt', 'w') as file:
    file.write(encodedMsg)
   

def fiveModulo(MSG, ENCODED_SIZE, encodedMsg):
    x=0
    for i in range(ENCODED_SIZE):
       if(i%5==0 and x<len(MSG)):
            encodedMsg=MSG[x]
            x+=1
        else:
            random_char =random.choice(string.ascii_letters)
            encodedMsg+=(random_char)

