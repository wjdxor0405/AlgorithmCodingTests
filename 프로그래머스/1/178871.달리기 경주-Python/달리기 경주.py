def solution(players, callings):
    # answer = []
    rank = dict()
    for i in range(len(players)):
        rank[players[i]] = i

    for c1 in callings:
        r1 = rank[c1]
        r0 = r1 - 1
        c0 = players[r1 - 1]
        players[r0] = c1
        players[r1] = c0
        rank[c0] = r1
        rank[c1] = r0

    return players