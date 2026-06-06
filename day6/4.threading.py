# Threading in Python lets you run multiple tasks concurrently within the same program.

# A thread is like a lightweight worker inside a process.
# ---------------------------------------------------
# threading 
# ---------------------------------------------------
# import threading
# import time

# def task():
#     for i in range(5):
#         print("Task running")
#         time.sleep(1)

# t1 = threading.Thread(target=task)

# t1.start()

# print("Main program continues")

# -------------------------------------------------
# multithreading 
# ---------------------------------------------------

# import threading
# import time

# def worker(name):
#     for i in range(3):
#         print(name, i)
#         time.sleep(1)

# t1 = threading.Thread(target=worker, args=("Thread-1",))
# t2 = threading.Thread(target=worker, args=("Thread-2",))

# t1.start()
# t2.start()



