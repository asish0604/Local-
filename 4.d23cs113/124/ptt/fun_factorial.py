def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*factorial(n-1)
        
number=int(input("please enter a number whose factorial is to be calculated"))
print("factorial of the number is ",factorial(number))





