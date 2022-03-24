id=input('아이디를 입력하세요:')
if(id=='lovePython!'):
    pw=input('비밀번호를 입력하세요:')
    if(pw=='p12345'):
        print('{}님 환영합니다~!!'.format(id))
    else:
        print('비밀번호가 틀립니다.')
else:
    print('아이디를 찾을 수 없습니다.')

