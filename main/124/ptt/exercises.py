tuple1=('apple','mango','grapes','banana')
print("lets check for orange")
if "orange" in tuple1:
    print("yes, orange is present inside the tuple1")
else:
    print("orange is not present")
    temp_list=list(tuple1)
    temp_list.append("orange")
    updated_tuple=tuple(temp_list)
    print("orange has been inserted")
    print(updated_tuple)

