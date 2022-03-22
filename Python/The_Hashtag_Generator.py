def generate_hashtag(s):
    
    if s == "" or len(s) >= 140:
        return False
    
    var = True
    finale = ""
    for i in s.lower():
        if i == ' ':
            var = True
            
        elif var == True:
            finale = finale + i.upper()
            var = False
            
        else:
            finale = finale + i
            
    return '#' + finale
            
        

    
    
