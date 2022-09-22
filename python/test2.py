for i in range(2**4):
    print("------------------------------")
    # print([i >> j for j in range(4)])
    pressArr = [(i >> j) & 1 for j in range(4)]
    print(pressArr)
