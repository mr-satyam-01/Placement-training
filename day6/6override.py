class animal:
    def sound(self):
        print("makes sound")
        
# create an instance and call the method
a = animal()
a.sound()

class dog(animal):
    def sound(self):
        print("barks")
        
b = dog()
b.sound()