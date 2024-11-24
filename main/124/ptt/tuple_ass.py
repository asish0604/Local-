def tup_Append(t,x):
    l=list(t)
    l.append(x)
    return (tuple(l))

def tup_insert(t,x,i):
    l=list(t)
    l.insert(i,x)
    return (tuple(l))

def tup_modify(t,x,i):
    l=list(t)
    l[i]=x
    return (tuple(l))

def tup_pop(t):
    l=list(t)
    last_item=l.pop()
    return (last_item)
t=(7,5,67,89,1,2,3)
print(t)
print(tup_Append(t,40))
print(tup_insert(t,60,4))
print(tup_modify(t,80,3))
#   print(tup_pop(t))
