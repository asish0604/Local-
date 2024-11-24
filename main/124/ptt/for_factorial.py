num=int(input("please enter a number whose factorial is to be calculated"))
result=1
for i in range(1, num+1):
    result=result*i
print("factorial of", num ," is ", result)
