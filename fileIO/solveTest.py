msg=""
with open('msg1.txt','r') as f:
    index=0
    while(True):
        char=f.read(1)
        if not char:
            break
        if(index%5==0):
            msg+=char
        index+=1
    print(msg)

    
