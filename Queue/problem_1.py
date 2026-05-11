# Question:
# 1. Implement Simple Queue using Array
# Operations:
# enqueue()
# dequeue()
# display()
# Goal:
# Understand FIFO (First In First Out)


# Solve:
queue = []

# Enqueue
queue.append(5)  # 0
queue.append(10)  # 1
queue.append(30)  # 2
queue.append(20)  # 3
queue.append(40)  # 4
queue.append(50)  # 5
queue.append(60)  # 6
queue.append(70)  # 7
queue.append(80)  # 8
queue.append(90)  # 9
queue.append(100)  # 10
queue.append(110)  # 11
queue.append(120)  # 12
queue.append(130)  # 13
queue.append(140)  # 14
queue.append(150)  # 15
queue.append(160)  # 16
queue.append(170)  # 17
queue.append(180)  # 18
queue.append(190)  # 19
queue.append(200)  # 20

print("Queue:", queue)

# Dequeue
queue.pop(int(input("Which you want to pop?\n")))
print("After Dequeue: ")

# Front Element
print("Front: ", queue)
