import random
import string


MSG="This is written using ASCII. ASCII is one of the oldest ways to translate computer bytes to English characters. This translation is known as encoding. ASCII is still widely used as a subset of modern encoding algorithms like UTF-8 but it has a significant drawback of not working with many foreign language alphabets."
encodedMsg=""


def read():


def write(msg):
    with open('ascii.txt', 'w') as f:
        f.write(msg)

def encode(MSG, encodedMsg):
    for i in range(len(MSG)):
            encodedMsg+=str(ord(MSG[i])) + "  "
    return encodedMsg

def decode(encodedMsg):
    out=""
    char=''
    x=0
    return out
    


choice=''
while(True):
    print("Type e to encode a message or d to decode one")


write(encode(MSG, encodedMsg))

   

