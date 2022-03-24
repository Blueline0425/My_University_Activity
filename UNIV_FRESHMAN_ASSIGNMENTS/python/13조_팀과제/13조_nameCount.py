name = input('이름을 입력하세요 :')
count=0
for i in range(0,len(name)):
    if(name[i]!='\0'):
        count+=1
print('이름은 {}자 입니다.'.format(count))