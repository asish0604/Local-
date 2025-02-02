def popTuple(T):
    if len(T)==0:
        raise ValueError("Cannot pop from an empty tuple")
    last_item=T[-1]
    new_tuple=T[:-1]
    return (last_item,new_tuple)
T=(1,2,3)
result=popTuple(T)
print(result)
