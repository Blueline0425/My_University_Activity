num_of_car=5

print('영화관의 방문을 환영합니다.\n')

while 1:
    print('현재 주차 가능 대수는 {}입니다.\n'.format(num_of_car))
    print('MENU\n0: 프로그램 종료\n1: 입차\n2: 출차')

    order=int(input('메뉴를 선택하십시오 :'))
    
    if order==0:
        break
    elif order==1:
        if num_of_car>=1:
            print('\n출입문이 열립니다.\n')
            num_of_car-=1
        else:
            print('\n주차가 불가능합니다.\n')
    elif order==2:
        print('\n안녕히 가세요.\n')
        if num_of_car<5:
           num_of_car+=1