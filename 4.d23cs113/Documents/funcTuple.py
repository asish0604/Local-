def appendTuple(T,x):
    return (*T,x)
T=(1,2,3)
x=4
result=appendTuple(T,x)
print(result)
def insertTuple(T,i,x):
    return T[:i] + (x,) + T[i:]
T=(5,6,7)
i=1
x=8
output=insertTuple(T,i,x)
print(output)
def modifyTuple(T,i,x):
    return T[:i] + (x,) + T[i+1:]
T=(1,2,3)
i=1
x=4
result=modifyTuple(T,i,x)
print(result)
def popTuple(T):
    if len(T)==0:
        raise ValueError("Cannot pop from an empty tuple")
    last_item=T[-1]
    new_tuple=T[:-1]
    return(last_item,new_tuple)
T=(8,7,3,2)
result=popTuple(T)
print(result)
 
