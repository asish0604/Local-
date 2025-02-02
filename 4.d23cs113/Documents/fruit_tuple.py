#create an empty tuple
fruit_tuple=()
#items to insert
fruits=["Mango","Cherry","Apple","banana","Apple","peach","orange"]
#insert items into the tuple using tuple concatenation
for fruit in fruits:
    fruit_tuple+=(fruit,)
#print the resulting tuple
print(fruit_tuple)
