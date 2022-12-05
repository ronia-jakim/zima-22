def mean_value(V):
    sum = 0
    amount = 0
    for i in V:
        amount += 1
        sum += i
    return sum / amount

def calc_slope(X, Y):
    mean_x = mean_value(X)
    mean_y = mean_value(Y)

    up = 0
    down = 0
    for i in range(len(X)):
        up += (X[i]-mean_x)*(Y[i]-mean_y)
        down += (X[i]-mean_x)**2

    print("mean value of X:", mean_x, "mean value of Y:", mean_y, "slope:", up / down)

X = [0, 10, 20, 30, 40, 80, 90, 95]
Y = [68, 67.1, 66.4, 65.6, 64.6, 61.8, 61, 60]

calc_slope(X, Y)