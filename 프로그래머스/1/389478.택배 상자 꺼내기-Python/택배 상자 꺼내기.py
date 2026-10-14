# 틀린 이유 : n 과 num 위치를 반대로 쓴 곳이 있었음.

def solution(n, w, num):
    answer = 0
    w2 = 2*w
    n = n - 1
    num = num - 1

    t_n = n // w
    t_num = num // w

    n_pos = n % w if n % w2 < w else w2 - 1 - (n % w2)
    num_pos = num % w if num % w2 < w else w2 - 1 - (num % w2)
    
    if n % w2 < w:
        if n_pos >= num_pos:
            answer = t_n - t_num + 1
        else:
            answer = t_n - t_num
    else:
        if n_pos <= num_pos:
            answer = t_n - t_num + 1
        else:
            answer = t_n - t_num

    return answer