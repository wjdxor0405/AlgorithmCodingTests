def solution(park, routes):
    i0, j0 = 0, 0
    H = len(park)
    W = len(park[0])

    for i in range(H):
        for j in range(W):
            if park[i][j] == 'S':
                i0 = i
                j0 = j
                break

    for r in routes:
        move = True
        d = r[0]
        c = int(r[2])
        if d == 'E':
            if j0 + c < W:
                for t in range(1, c+1):
                    if park[i0][j0 + t] == 'X':
                        move = False
                        break
                if move:
                    j0 = j0 + c
        elif d == 'W':
            if j0 - c >= 0:
                for t in range(1, c+1):
                    if park[i0][j0 - t] == 'X':
                        move = False
                        break
                if move:
                    j0 = j0 - c
        elif d == 'N':
            if i0 - c >= 0:
                for t in range(1, c+1):
                    if park[i0 - t][j0] == 'X':
                        move = False
                        break
                if move:
                    i0 = i0 - c
        elif d == 'S':
            if i0 + c < H:
                for t in range(1, c+1):
                    if park[i0 + t][j0] == 'X':
                        move = False
                        break
                if move:
                    i0 = i0 + c

        
    return [i0, j0]