def solution(board, moves):
    answer = 0
    depth = len(board)
    width = len(board[0])
    tops = [depth for i in range(width)]
    for n in range(width):
        for d in range(depth):
            if board[d][n] != 0:
                tops[n] = d
                break
    stack_size = width*depth

    stack = [0 for i in range(stack_size)]
    p = 0

    for move in moves:
        
        if tops[move-1] < depth:
            stack[p] = board[tops[move-1]][move-1]
            tops[move-1] += 1
        else:
            continue
        
        if p == 0:
            p += 1
        else:
            if stack[p-1] == stack[p]:
                answer += 2
                p -= 1
            else:
                p += 1

    return answer