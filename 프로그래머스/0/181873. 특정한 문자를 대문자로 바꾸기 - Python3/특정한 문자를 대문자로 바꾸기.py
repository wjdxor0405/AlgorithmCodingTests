def solution(my_string, alp):
    
    answer = ''
    for c in my_string:
        if c == alp:
            c = alp.upper()#
        answer += c
    
    return answer