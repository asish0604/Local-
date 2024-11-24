
def appendTuple(T, x):

    L = list(T)
    L.append(x)
    return tuple(L)


def insertTuple(T, i, x):
    
    L = list(T)
    L.insert(i, x)
    return tuple(L)


def modifyTuple(T, i, x):

    L = list(T)
    L[i] = x
    return tuple(L)


def popTuple(T):

    L = list(T)
    last_item = L.pop()
    return last_item, tuple(L)


if __name__ == "__main__":

    T = ('Rose', 15)
    print("Original tuple:", T)


    T = appendTuple(T, "NewItem")
    print("Tuple after appending 'NewItem':", T)


    T = insertTuple(T, 1, "InsertedItem")
    print("Tuple after inserting 'InsertedItem' at index 1:", T)


    T = modifyTuple(T, 0, "ModifiedItem")
    print("Tuple after modifying index 0 with 'ModifiedItem':", T)


    last_item, T = popTuple(T)
    print("Popped item:", last_item)
    print("Tuple after popping the last item:", T)

