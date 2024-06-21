
class A:
    
    def __init__(self):
        print("A!")

class B:
    
    def __init__(self):
        print("B!")
        
class C(A , B):
    
    def __init__(self):
        
        print("C!")
        A.__init__(self)
        B.__init__(self)


if __name__ == "__main__":
    
    #a = A()
    #b = B()
    c = C()