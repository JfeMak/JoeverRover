import time
start = time.time()

count = 0

for i in range (1,10000):
    count += 1


end = time.time()
print((end - start)*1000)