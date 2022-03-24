odd = 0
even = 0
for i in range(1,101):
    if(i%2==0):
        even+=i
    else:
        odd+=i
print('홀수의합 :', odd)
print('짝수의합 :', even)