class Employee:
    def __init__(self,n,p,s):
        self.name=n
        self.position=p
        self.salary=s
    def getSalary(self):
        print("%s의 급여 : %d" %(self.name,self.salary))
    
    def salaryUp(self):
        if(self.position=="director"):
            self.salary*=1.1

alice=Employee("alice","staff", 3000000)
bob=Employee("bob","director",4000000)
alice.getSalary()
bob.getSalary()
alice.salaryUp()
bob.salaryUp()
alice.getSalary()
bob.getSalary()
