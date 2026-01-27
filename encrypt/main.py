MESSAGE_SAMPLE="This is a sample message for testing. It should be replaced later"
ENCRYPTED_SAMPLE="65 66 67 68 69 70 71 72"
currently_loaded_message=ENCRYPTED_SAMPLE
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

def readFile(fileName):
    try:
        with open(fileName,"r") as f:
            return f.read()
    except FileNotFound:
        print("Error file not found")

def writeFile(fileName, text):
    with open(fileName."w") as f:
        f.write(text)

def menu():
    while(True):
        print("Please choose an option")
        print("--------------------------")
        print("1) encrypt a message")
        print("2) decrypt a message")
        print("3) show currently loaded message")
        print("4) load a message from a file")
        print("5) write currently loadedmessage to file")
        print("6) exit")
        print("-------------------------")
        try:
            choice=int(input())
            if(choice==1):
                print(encode(currently_loaded_message))
            elif(choice==2):
                print(decode(currently_loaded_message))
            elif(choice==3):
                print(currently_loaded_message)
            elif(choice==4):
                currently_loaded_message=readFile(testMessage)
            elif(choice==6):
                exit()
            else:
                print("Please choose a valid option (1, 2, or 3)")
        except ValueError:
                print("Invalid input. Please try again.")



menu()
