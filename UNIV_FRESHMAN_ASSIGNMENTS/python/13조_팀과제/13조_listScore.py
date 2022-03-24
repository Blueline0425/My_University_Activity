score = [70, 60, 55, 75, 95, 90, 80, 65, 85, 100]
count = 0
for i,value in enumerate(score):
    if(value<70):
        count+=1
print('70점 미만인 학생의 수 :',count)