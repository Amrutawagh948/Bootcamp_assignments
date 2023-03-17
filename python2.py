def smallest(list1):
    small= list1[0]
    for i in list1:
        if i<small:
            small=i
    return small

list1=[5,7,9,14,10,20,4]
print("smallest in ",list1,"is")
print(smallest(list1))