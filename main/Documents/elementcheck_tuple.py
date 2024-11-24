#Existing tuple
my_tuple=("Mango","Cherry","Apple","Banana")
#element to check and add
new_element=input("Enter a fruit:")
#check if element exists in tuple
if new_element in my_tuple:
    print(f"{new_element}already exists in the tuple")
else:
    #convert tuple to list (since tuples are immutable)
    my_list=list(my_tuple)
    #add new element to list
    my_list.append(new_element)
    #convert list back to tuple
    my_tuple=tuple(my_list)
    print(f"{new_element}added to the tuple")
    print("updated tuple:",my_tuple)
