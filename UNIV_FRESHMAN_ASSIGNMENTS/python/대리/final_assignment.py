def app_time(dic):
    sum=0
    max=-10000
    min=10000
    for i in dic.values():
        if max<i:
            max=i
        if min>i:
            min=i
        sum+=i
    average=sum/len(dic)
    return average,sum,max,min


apps={"facebook":16,"chrome":14,"youtube":34,"youtube music":24,"twitch":20}
average,sum,max,min=app_time(apps)

print("\n앱 사용 시간 통계\n\n평균 시간: {} 시간\n총합 시간: {} 시간\n최대 시간: {} 시간\n최소 시간: {} 시간\n".format(average,sum,max,min))

print('<스크린 타임>')
for i in apps.keys():
    print("{:15}: ".format(i),end="")

    for k in range(0,apps.get(i)):
        print("*",end="")
    print("")


