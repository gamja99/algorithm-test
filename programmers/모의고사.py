def solution(answers):
    n1 = [1,2,3,4,5,]
    n2 = [2,1,2,3,2,4,2,5]
    n3 = [3,3,1,1,2,2,4,4,5,5]
    score=[0,0,0]
    
    for x in range(0,len(answers)):
        if n1[x%5] == answers[x]:
            score[0]+=1
        if n2[x%8] == answers[x]:
            score[1]+=1
        if n3[x%10] == answers[x]:
            score[2]+=1
    mx = max(score)
    
    for x in range(3):
        if score[x] == mx:
            score.append(x+1)
    return score[3:]
