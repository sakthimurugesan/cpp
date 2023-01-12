class Add:
    def __init__(self):
        pass
    def add(m1,m2):
        print(m1+m2)
class Sub:class Add:
    def __init__(self):
        self.m1=0
        self.m2=0
        self.get()
        Add.add(self.m1,self.m2)
        self.sub()
    def get(self):
        self.m1=int(input())
        self.m2=int(input())
    def sub(self):
        print(self.m1-self.m2)
b=Sub()