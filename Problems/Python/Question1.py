

# # n = int(input()) # taking input 
# # l = []   # empty list        
# # for i in range(n):          #loop 
# #     l.append(input())
# # for i in range(len(l)):
# #     count1 = 0
# #     count2 = 0
# #     for j in l:
       
# #         if j.isidentifier() or (j.isspace()):
# #                 count1 +=1
# #         else:
# #             count2 +=1
# #             # print("Invalid: ",j)

# # print("Valid: ",count1)
# # print("Invalid: ",count2)


# '''

# Input:
# 4
# Hello Good Morning   0 = i 
# abcd123Fghy          1
# India                2
# progoti.c            3

# Output:
# Valid:  2
# Invalid:  2

# '''
# # Valid string  = isidentifire + having spaces 

# # TotalInput = int(input())

# # listt = [] 
# # count = 0
# # for i in range(TotalInput):
# #     word = str(input())
# #     listt.append(word)

# #     for j in listt:
# #         # print(j)
# #         if j.isspace():
# #             count +=1
# # print("String: ",word)    
# # print("Valid String Count :",count)
    
    
    
    
    
# TotalInput = int(input())

# listt = [] 
# count = 0
# for i in range(TotalInput):
#     word = str(input())

#     for j in word:
#         # print(j)
#         if j.isspace() and j.isalpha():
#             count +=1
# print("String: ",word)    
# print("Valid String Count :",count)
        


# # print(listt)

























# class Pepper :
#     def __init__(self,name,color,SHI,price):
#         self.name = name
#         self.color = color
#         self.SHI = SHI
#         self.price = price
# class Store:
#     def __init__(self,username,list1):
#         self.username = username
#         self.list1 = list1
#     def findSpiciestPepper(self):
#         l1 = []
#         for i in list1:
#             l1.append(i.SHI)
#         m = max(l1)
#         for j in list1:
#             if j.SHI >= 14000 and j.SHI == m:
#                 print(f"{j.name} with {j.color} of SHI : {j.SHI}")
#                 # print(j.name)
#                 # print(j.color)
#                 # print(j.SHI)
#                 # print(j.price)
#         else:
#             return None


#     def SortPepperByprice(self):
#         l2 = sorted(list1 , key = lambda  x : x.price , reverse = False)
#         for i in l2:
#             print(i.name)
#             print(i.price)
#         else:
#             return None

# n = int(input())
# list1 = []
# for i in range(n):
#     name = input()
#     color = input()
#     SHI = int(input())
#     price = float(input())
#     objpepper = Pepper(name,color,SHI,price)
#     list1.append(objpepper)
# # username = input()
# objStore = Store('Mayank',list1)
# print("\n")
# print("Spiciest Pepper :")
# ans1 = objStore.findSpiciestPepper()
# print("\n")
# print("Sorted Pepper by price :")
# ans2 = objStore.SortPepperByprice()
    



'''
Input:
3
corona
red
15000 
32
nupur
green
42350
90
greenchilli
yellow
12343
43

Output:

Spiciest Pepper :
nupur with green of SHI : 42350

Sorted Pepper by price :
corona
32.0
greenchilli
43.0
nupur
90.0

'''







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
