number=[4,13,15,70,51,23,38,9,12,5]
even=[]
odd=[]
for i in number:
    if i%2==0:
        even.append(i)
    else:
        odd.append(i)
even.sort()
odd.sort()
print('짝수 리스트 =',even)
print('홀수 리스트 =',odd)