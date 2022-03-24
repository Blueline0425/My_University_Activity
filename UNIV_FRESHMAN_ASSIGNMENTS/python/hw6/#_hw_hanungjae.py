def func_sum(a,b,c,d,e):
    total=a+b+c+d+e
    return total
score=[73,95,80,57,99]
sum=func_sum(*score)
print('합계 점수 :',sum)
print('평균 점수 :',sum/len(score))