

class Base:
    
    def __init__(self , val_1 , val_2) -> None:
        
        self.base_var_1 = val_1
        self.base_var_2 = val_2
        
        
    def call_me (self):
        return f"Hello I am from base class and my attribues are {self.base_var_1} and {self.base_var_2}"
    
    @staticmethod 
    def s_method():
        return "I am static"
    
    
class Dervied(Base):
    
    def __init__(self, val_1 = None, val_2 = None) -> None:
        #super().__init__(val_1, val_2)
        self.head = "My head"
            
    @staticmethod
    def s_method():
        return "I am also static !"
    
    def call_me(self):
        super().call_me()
        
    def call_me_again(self):
        return "I called from derived !"
    
if __name__ == "__main__":
    
    b = Base(10 , 20)
    d = Dervied()
    
    print(b.s_method())
    print(b.call_me())
    
    print(d.s_method())
    print(d.call_me())
    print(d.call_me_again())
    
    print(b.base_var_1)
    print(b.base_var_2)
    
    print(d.head)
    