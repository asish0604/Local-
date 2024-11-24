#tuples with duplicates
my_tuple=("Mango","Cherry","Apple","Banana","Apple","peach","Mango")
#convert tuple to set and then back to tuple
my_tuple_unique=tuple(set(my_tuple))
print("Original Tuple:",my_tuple)
print("Tuple without duplicates:",my_tuple_unique)
