price = int(input('가격을 입력하세요 : '))
coupon = input('쿠폰을 입력하세요(vip/member/etc) : ')
if(coupon =='vip'):
    price*=0.7
    print('할인된 가격은 {:.0f}'.format(price))
elif(coupon=='member'):
    price*=0.8
    print('할인된 가격은 {:.0f}'.format(price))
else:
    price*=0.95
    print('할인된 가격은 {:.0f}'.format(price))
