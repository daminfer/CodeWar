def is_valid_walk(walk):
    # x <- w = -1 et e = 1
    # y <- s = -1 et n = 1
    (x,y) = (0,0)
    for i in walk:
        if i == 'w':
            x = x - 1
            
        elif i == 'e':
            x = x + 1
            
        elif i == 'n':
            y = y + 1
            
        elif i == 's':
            y = y - 1
    if (x,y) == (0,0) and len(walk) == 10:
        print(x,y)
        return True
    else:
        print(x,y)
        return False
