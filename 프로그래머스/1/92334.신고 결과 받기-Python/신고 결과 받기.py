def solution(id_list, report, k):
    
    report_list = dict()
    reported_list = dict()
    for r in report:
        id, reported_id = r.split(' ')
        if id not in report_list:
            report_list[id] = dict()
        report_list[id][reported_id] = True
        if reported_id not in reported_list:
            reported_list[reported_id] = dict()
        reported_list[reported_id][id] = True
        
    reported_count = dict()
    for id in id_list:
        reported_count[id] = 0
    for id in report_list:
        for reported_id in report_list[id]:
            reported_count[reported_id] += 1

    email_count = dict()
    for id in id_list:
        email_count[id] = 0
    for id in reported_list:
        for report_id in reported_list[id]:
            if reported_count[id] >= k:
                email_count[report_id] += 1

    answer = [0]*len(id_list)
    for i in range(len(id_list)):
        answer[i] = email_count[id_list[i]]

    return answer