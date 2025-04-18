






# class Pepper:
#     def __init__(self, name,color,SHI,price):
#         self.name = name
#         self.color = color
#         self.SHI = SHI
#         self.price = price
# class Store:
#     def __init__(self,listt):
#         self.listt = listt
#     def SortByYellow(self):
#         for i in listt:
#             if i.color.islower() == 'Yellow':
#                 print(i.name)
#         else:
#             return None
            


    
  
# n = int(input("Enter Total Number of Spices you want to check in:  "))   

# listt = []

# for i in range(n):
#     name = str(input("Enter name of Spice: "))
#     color = str(input("Enter color: "))
#     SHI = int(input("Enter SHI: "))
#     price = int(input("Enter Price: "))

#     objectPepper = Pepper(name,color,SHI,price)
#     listt.append(objectPepper)


# objStore = Store(listt)


# # ans = Store.SortByYellow(listt)
# # print(ans)

# print(objectPepper.SortByYellow())




class Pepper:
    def __init__(self, name, color, SHI, price):
        self.name = name
        self.color = color
        self.SHI = SHI
        self.price = price

class Store:
    def __init__(self, listt):
        self.listt = listt  # ✅ This is fine as per your logic (capital 'L')

    def SortByYellow(self):
        for i in self.listt:  # ✅ Use self.Listt instead of listt (since it's not global)
            # ❌ Incorrect comparison
            # if i.color == 'Yellow'.islower():
            # ✅ Corrected:
            if i.color.lower() == 'yellow':
                print(i.name)
        else:
            return None


n = int(input("Enter Total Number of Spices you want to check in:  "))   

listt = []

for i in range(n):
    name = str(input("Enter name of Spice: "))
    color = str(input("Enter color: "))
    SHI = int(input("Enter SHI: "))
    price = int(input("Enter Price: "))

    objectPepper = Pepper(name, color, SHI, price)
    listt.append(objectPepper)

objStore = Store(listt)

# ❌ Wrong call:
# print(objectPepper.SortByYellow())
# ✅ Correct way to call method from Store class:
objStore.SortByYellow()
