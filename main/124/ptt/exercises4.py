tuple1=("banana","apple","mango","orange","guava")
try:
    for i in tuple1:
        if i=="banana":
            print(f"banana is at the index no. {tuple1.index(i)}")
except:
    print("banana is not present in the tuple")


