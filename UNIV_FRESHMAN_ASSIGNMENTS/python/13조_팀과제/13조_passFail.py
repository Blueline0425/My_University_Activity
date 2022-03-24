kor = int(input('점수를 입력하세요: '))
eng = int(input('점수를 입력하세요: '))
mat = int(input('점수를 입력하세요: '))
sci = int(input('점수를 입력하세요: '))
average = (kor+eng+mat+sci)/4
if(average>=80):
    print('평균은 {:.2f} 합격!'.format(average))
else:
    print('평균은 {:.2f} 불합격!'.format(average))