import time
i=0
dumbTime = 0
while True:
    dumbTime+=10
    if i==0:
        i+=1
    elif i==1:
        i-=1
    print(i, "   Time(s): ", (dumbTime/1000))
    time.sleep(0.01)