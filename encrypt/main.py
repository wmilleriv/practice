MESSAGE_SAMPLE="This is a sample message for testing. It should be replaced later"
def encode(msg):
    encodedMsg=""
    for char in list(msg):
        encodedMsg+=str(ord(char))+" "

    return encodedMsg

def decode(encoded_msg):
    msg=""
    return msg


print(encode(MESSAGE_SAMPLE))
