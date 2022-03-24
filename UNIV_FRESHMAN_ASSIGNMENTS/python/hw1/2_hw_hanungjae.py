x = int(input('정수를 입력하세요:'))
y=0
y+=x%10
x//=10
y+=x%10
x//=10
y+=x%10
x//=10
y+=x%10
x//=10
print('자리수 합은 {}이다.'.format(y))

