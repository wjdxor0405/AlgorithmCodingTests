'처음 생각한 방향의 반례 상황'
'-1 -1  A  A'
'-1 -1 -1 -1'
'A -1 -1 -1'
'A -1 -1 -1'


def solution(mats, park):
    answer = -1
    n = len(park)
    m = len(park[0])
    max_len = 0

    for i in range(n):
        for j in range(m):
            if park[i][j] == '-1':
                if max_len < 1 :
                    max_len = 1
                s = min(n - i, m - j)
                # park[i][j] = 'X'
                if s < 2:
                    s = 1
                else:
                   for k in range(1,s):

                        lst = [(i+k,j+l) for l in range(k+1)] + [(i+l,j+k) for l in range(k+1)]

                        T = True
                        for a, b in lst:
                            if park[a][b] != '-1':
                                T = False
                                break
                        if T:

                            if max_len < k+1:
                                max_len = k+1
                            # for a, b in lst:
                            #     park[a][b] = 'X'
                        else:
                            break

    for mat in mats:
        if mat <= max_len and answer < mat:
            answer = mat

    return answer
