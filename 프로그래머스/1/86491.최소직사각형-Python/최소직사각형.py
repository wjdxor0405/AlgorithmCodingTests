def solution(sizes):
    max_a = 0
    max_b = 0
    for a, b in sizes:
        if a < b:
            a, b = b, a
        if max_a < a:
            max_a = a
        if max_b < b:
            max_b = b
        
    return max_a*max_b