# l = [3,4,2,8,9,6,7,1]

# target = 2

# # target = target%len(l)

# reversedlist = []
# firsthalf = []
# secondhalf = []
# final = []

# # for i in l[::-1]:
# #     reversedlist.append(i)
# for j in range(len(l)):
#     if(j<target):
#         firsthalf.append(l[j::-1])
#     else:
#         secondhalf.append(l[j])
        

# # print(reversedlist)
# print(firsthalf)
# # print(secondhalf)
# # print(final)
    
        

def rotate_list(lst, target):
    # Find the index of the target element
    if target in lst:
        index = lst.index(target)
        # Rotate the list by moving elements before target to the end
        return lst[index+1:] + lst[:index+1]
    else:
        return lst  # Return the original list if target is not found

# Given list and target
l = [3, 4, 2, 8, 9, 6, 7, 1]
target = 2
print(l)
# Rotate the list
l = rotate_list(l, target)

# Print the updated list
print("l =", l)
