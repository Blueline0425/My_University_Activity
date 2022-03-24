score = []
avg=0
for i in range(1,11):
    val=int(input('{}. 점수를 입력하세요: '.format(i)))
    score.append(val)
    avg+=val
print('평균: {:.1f}'.format(avg/10))