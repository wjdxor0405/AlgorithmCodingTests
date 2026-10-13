def solution(schedules, timelogs, startday):
    answer = 0
    schedules = [schedule//100*60 + schedule%100 for schedule in schedules]
    timelogs = [[t//100*60 + t%100 for t in timelog] for timelog in timelogs]

    for i in range(len(timelogs)):
        count = 0
        for j in range(len(timelogs[0])):
            # s= 1 -> 5,6 (s+j)==6,(s+j)==7  0월  1화  2수  3목  4금 (5토)(6일)
            # s= 2 -> 4,5 (s+j)==6,(s+j)==7  0화  1수  2목  3금 (4토)(5일) 6일
            # s= 3 -> 3,4 (s+j)==6,(s+j)==7  0수  1목  2금 (3토)(4일) 5월  6화
            # s= 4 -> 2,3 (s+j)==6,(s+j)==7  0목  1금 (2토)(3일) 4월  5화  6수
            # s= 5 -> 1,2 (s+j)==6,(s+j)==7  0금 (1토)(2일) 3월  4화  5수  6목
            # s= 6 -> 0,1 (s+j)==6,(s+j)==7 (0토)(1일) 2월  3화  4수  5목  6금
            # s= 7 -> 6,0 (s+j)==6,(s+j)==7 (0일) 1월  2화  3수  4목  5금 (6토)
            if ((startday+j)%7 != 6) and ((startday+j)%7 != 0):
                if timelogs[i][j] <= schedules[i]+10:
                    count += 1
        if count == 5:
            answer +=1


    return answer