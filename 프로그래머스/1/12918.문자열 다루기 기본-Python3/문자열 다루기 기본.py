def solution(s):
    answer = True
    if len(s) in [4, 6]:
        for c in s:
            if c in ['0','1','2','3','4','5','6','7','8','9']:
                pass
            else:
                answer = False
                break
    else:
        answer = False
    
    return answer