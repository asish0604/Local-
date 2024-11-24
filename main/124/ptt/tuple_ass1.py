tuple1=("apple","mango","grapes","cherry")
add_item=input("please enter a fruit which has to be added to the tuple")
def inserttuple(tuple1,add_element):
    fruit=add_item
    fruit=(add_item ,)
    output=tuple1 + fruit
    print(output)
inserttuple(tuple1,add_item)
