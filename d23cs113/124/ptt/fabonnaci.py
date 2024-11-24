num=int(input("please enter a number "))
first=0
second=1
for i in range(num):
    print(first,end=" ")
    next=first+second
    first=second
    second=next
    
