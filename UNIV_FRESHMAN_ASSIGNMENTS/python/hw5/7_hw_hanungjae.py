name=[]
score=[]
while True:
    x=input('이름을 입력하시오 :')
    y=input('점수를 입력하시오 :')
    if x == '' and y=='':
        break
    name.append(x)
    score.append(y)
dic=dict(zip(name,score))
print(dic)