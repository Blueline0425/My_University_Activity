for i in range(1,4):
    for k in range(1,8):
        print('*',end="")
    print('')
print("")
for i in range(1,6):
    for k in range(1,6):
        if(i==k):
            print('*',end="")
        else:
            print(' ',end="")
    print('')
print("")
for i in range(1,6):
    for k in range(1,6):
        if(k>=i):
            print('*',end="")
        else:
            print(' ',end="")
    print('')