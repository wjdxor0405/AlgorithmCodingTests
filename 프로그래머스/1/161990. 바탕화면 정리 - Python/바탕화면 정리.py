def solution(wallpaper):

    a,b,= len(wallpaper), 0
    c,d,= len(wallpaper[0]), 0
    for i in range(len(wallpaper)):
        for j in range(len(wallpaper[0])):
            if wallpaper[i][j] == '#':
                if i < a:
                    a = i
                if b < i:
                    b = i
                if j < c:
                    c = j
                if d < j:
                    d = j

    return [a,c,b+1,d+1]