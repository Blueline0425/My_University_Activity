name=['john','rosa','maria']
name.append('danny')
name.insert(2,'alex')
name[1]='selly'
print(len(name))
name.remove('alex')
del name[1]
name.pop()
name.clear()
print(len(name))
bucketList=['김가천',22,'서울','속초','부산','제주']
bucketList[0:6:2]
print(bucketList[0:6:2])
print(bucketList[3:])
print(bucketList[:3])
print(bucketList[2:6]+bucketList[2:6])

myList=["hello","bye"]
print(myList[0])

a="Life is too short, you need python"
print((a[0:4]+" ")*3)
print(a[-6:])
print(bucketList+myList)

a=[5,7,3]
b=[3,9,1]
c=a+b
c.sort()
c.reverse()

print(c)

print(c.index(5))
print("Bye" in myList)

print(c.count(3))

i=0
while i<len(bucketList):
    print(bucketList[i])
    i+=1
k=0
for k in bucketList:
    print(k)