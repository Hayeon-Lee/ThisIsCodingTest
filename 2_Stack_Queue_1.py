import math

def solution(progresses, speeds):
    days = 0
    stack = []
    answer = [] 
    
    for i in range(len(progresses)):
        days = math.ceil((100-progresses[i])/speeds[i])
        
        if i == 0:
            stack.append(days)
            
        else:
            if stack[0]>=days:
                stack.append(days)
            else:
                answer.append(len(stack))
                stack.clear()
                stack.append(days)
                
    answer.append(len(stack))
    
    return answer
