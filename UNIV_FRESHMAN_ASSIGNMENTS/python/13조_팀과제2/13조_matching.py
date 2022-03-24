import random
def dataInput() :
    s1=input("data list(ex: a,b,c) :")
    s2=input("data list(ex: a,b,c) :")
    return s1.split(','),s2.split(',')
def shake(list) :
    random.shuffle(list)
    return list

l1,l2=dataInput()
l1=shake(l1)
l2=shake(l2)
print("\n축하합니다~~~\n")
for i in range(0,len(l2)):
    print(l1[i],"<---------->",l2[i])