# ---------------------------------------single level inheritance
class father():
    def king(self):
        print("I am the king")
        
class son(father):
    def prince(self):
        print("i am prince")
        
a = son()
a.prince()


# --------------------------------------multi level inheritance
class father():
    def king(self):
        print("I am the king")
        
class son(father):
    def prince(self):
        print("i am prince")
        
class sonkason(son):
    def nextprince(self):
        print("i am prince ka prince")
        
a = son()
b= sonkason()

a.prince()
b.nextprince()


# ------------------------------------------hybrid inheritance
# Hybrid Inheritance

class GrandFather:
    def property(self):
        print("Grandfather's property")

class Father(GrandFather):
    def business(self):
        print("Father's business")

class Mother:
    def jewellery(self):
        print("Mother's jewellery")

class Child(Father, Mother):  # Multiple inheritance
    def myself(self):
        print("I am the child")

c = Child()

c.myself()
c.business()
c.jewellery()
c.property()