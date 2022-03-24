voted = {'John':True,'Alice':False,'Rosa':True}
print(voted)

while True:
  name = input("이름을 입력하세요: ")
  if name == '':
    break
  if name in voted:
    if voted[name] == True:
      print("{} 이미 투표하였습니다.".format(name))
    elif voted[name] == False:
      print("{} 투표하세요!".format(name))
      voted[name]=True
  else:
    print("{} 투표권이 없습니다.".format(name)) 
  print("")

print(voted)
