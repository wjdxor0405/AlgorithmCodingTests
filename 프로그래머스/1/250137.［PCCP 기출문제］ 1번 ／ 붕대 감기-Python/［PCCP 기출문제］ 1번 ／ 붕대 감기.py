def solution(bandage, health, attacks):

    attack = dict()

    T_len = 0

    for att in attacks:
        attack[att[0]] = att[1]
        T_len = att[0]

    hp = health
    heal_t = bandage[0]

    for i in range(T_len+1):
        if i in attack:
            hp -= attack[i]
            heal_t = bandage[0]
            if hp <= 0:
                hp = -1
                break
        elif heal_t > 0:
            hp = min(hp + bandage[1], health)
            heal_t -= 1
            if heal_t == 0:
                hp = min(hp + bandage[2], health)
                heal_t = bandage[0]

    return hp