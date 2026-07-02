def solution(answers):
    answer = []
    supo = [[1,2,3,4,5],
        [2,1,2,3,2,4,2,5],
        [3,3,1,1,2,2,4,4,5,5]]
    counts = [[0, 1], [0, 2], [0, 3]]
    for i in range(len(answers)):
        for j in range(3):
            if answers[i] == supo[j][i % len(supo[j])]:
                counts[j][0] += 1
    
    # counts.sort()
    counts.sort(key=lambda x: x[0], reverse=True)
    answer.append(counts[0][1])
    if counts[0][0] == counts[1][0]:
        answer.append(counts[1][1])
        if  counts[1][0] == counts[2][0]:
            answer.append(counts[2][1])

    return sorted(answer)