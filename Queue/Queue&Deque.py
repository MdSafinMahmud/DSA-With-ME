from collections import deque

queue = deque()
queue.append(10)
queue.append(20)
queue.append(30)  # 2
queue.append(40)  # 3
queue.append(50)  # 4
queue.append(60)  # 5
queue.append(70)  # 6
queue.append(80)  # 7
queue.append(90)  # 8
queue.append(100)  # 9
queue.append(101)  # 10
queue.append(102)  # 11
queue.append(103)  # 12
queue.popleft()  # to remove first element
print(queue)
