s = "we have to learn python"
slist=s.split()
print('split 결과 :',slist)
slist.sort()
print('sort 결과 :',slist)
for i,value in enumerate(slist):
    print(value)