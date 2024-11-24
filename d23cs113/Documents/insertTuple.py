def insertTuple(T,i,x):
    return T[:i] + (x,) + T[i:]
T =(1,2,3)
i=1
x=4
result = insertTuple(T,i,x)
print(result)

