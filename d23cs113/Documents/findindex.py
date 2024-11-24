#Tuple with fruits
my_tuple=("Mango","Cherry","Apple","banana","Apple","Peach","Mango")
#find index of banana
try:
    index=my_tuple.index("banana")
    print(f"The index of 'banana' is:{index}")
except ValueError:
    print("banana  not found un the tuple")
