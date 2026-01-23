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


print(decode(ENCRYPTED_SAMPLE))
