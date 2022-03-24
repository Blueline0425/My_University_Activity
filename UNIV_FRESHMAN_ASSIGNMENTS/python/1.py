print("3자리수 곱셈입니다\n변수에 3자리를 입력해주세요.")
A=int(input("A="))
B=int(input("B="))
c=B
sum=0
print("{0:>6}".format(A))
print("{:>3}{:<6}".format('X',B))
print("------")
B=c%10
print("{:>6}".format(A*B))
sum+=A*B

B=int((c%100)/10)
print("{:>5}".format(A*B))
sum+=A*B*10

B=int(c/100)
print("{:>4}".format(A*B))
sum+=A*B*100

print("------")
print("{:>6}".format(sum))