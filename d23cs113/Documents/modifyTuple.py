def modifyTuple(T,i,x):
    return T[:i] + (x,) + T[i+1:]
T = (1,2,3)
i=1
x=4
result = modifyTuple(T,i,x)
print(result)
