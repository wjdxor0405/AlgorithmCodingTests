def solution(data, ext, val_ext, sort_by):
    d = {"code":0, "date" :1,"maximum" : 2,	"remain":3}
    data = [x for x in data if x[d[ext]] < val_ext]
    data.sort(key=lambda x : x[d[sort_by]])
    # code	date	maximum	remain
    return data