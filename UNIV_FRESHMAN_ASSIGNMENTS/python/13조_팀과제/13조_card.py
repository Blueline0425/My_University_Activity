age = int(input('나이를 입력하세요: '))
balance = 5000
if(12>=age>=8):
    balance-=650
elif(18>=age>=13):
    balance-=1050
elif(59>=age>=19):
    balance-=1250
print('잔액 = ', balance)