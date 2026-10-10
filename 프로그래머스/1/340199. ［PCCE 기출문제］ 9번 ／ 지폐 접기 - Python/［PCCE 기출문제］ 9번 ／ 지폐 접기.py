def solution(wallet, bill):
    answer = 0
    w1, w2 = wallet
    if w1 < w2:
        w1, w2 = w2, w1
    b1, b2 = bill
    if b1 < b2:
        b1, b2 = b2, b1


    while True:
        if b1 < b2:
            b1, b2 = b2, b1
        
        if b1 <= w1 and b2 <= w2:
            break
        else:
            b1 //= 2
            answer +=1

    
    return answer