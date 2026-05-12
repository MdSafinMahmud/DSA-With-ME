from collections import deque

queue = deque()


def operation(choice):
    match choice:
        case 1:
            queue.append(1)
            queue.append(2)
            print("Enqueued 2 values:", list(queue))
        case 2:
            if queue:
                removed = queue.popleft()
                print("Dequeued:", removed)
                print("Queue after dequeue:", list(queue))
        case 3:
            queue.extend([3, 4, 5, 6])
            print("Enqueued 4 values:", list(queue))
        case 4:
            for _ in range(2):
                if queue:
                    removed = queue.popleft()
                    print("Dequeued:", removed)
            print("Queue after 2 dequeues:", list(queue))
        case _:
            print("Invalid option")


# Function calls (OUTSIDE the function)
operation(1)
operation(2)
operation(3)
operation(4)
