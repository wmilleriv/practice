MESSAGE_SAMPLE="This is a sample message for testing. It should be replaced later"
ENCRYPTED_SAMPLE="65 66 67 68 69 70 71 72"
def encode(msg):
    encodedMsg=""
    for char in list(msg):
        encodedMsg+=str(ord(char))+" "

    return encodedMsg

def decode(encoded_msg):
    msg=""
    for char in encoded_msg.split():
        msg+=str(chr(int(char)))
    return msg

def menu():
    while(True):
        print("Please choose an option")
        print("--------------------------")
        print("1) encrypt a message")
        print("2) decrypt a message")
        print("3) exit")
        print("-------------------------")
        choice=input()
    return choice
menu()
#print(decode(ENCRYPTED_SAMPLE))
