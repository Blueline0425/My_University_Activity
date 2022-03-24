import random

hanguls=list("가나다라마바사아자차카타파하")
with open("info.txt","w",encoding="utf8") as f:
    for i in range(0,1000):
        name=random.choice(hanguls)+random.choice(hanguls)
        weight=random.randrange(40,100)
        height=random.randrange(140,200)
        f.write("{}, {}, {}\n".format(name,weight,height))