tuple1=('apple','apple','mango','banana','grapes')
element=input("please enter which element you want to search for?")
if(element in tuple1):
     print("the element is present in the tuple")
else:
    print("the element is not present in the tuple \n Including it in the tuple....")
    tuple2=(element)
    tuple3=tuple1+tuple2
    print(tuple3)



