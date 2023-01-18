function simpsons_rule(a, b)
    ret = b - a
    ret /= 6
    sum = sin(a) + 4* sin((a+b) / 2) + sin(b)
    ret *= sum
    return ret
end

function int_simps(n)
    delta = pi / n
    val = 0
    for i in 1:n
        val += simpsons_rule((i-1) * delta, i * delta)
    end
    return val
end

function find_appropriate()
    exact = 2
    error = Inf
    n = 2
    my = Inf
    while abs(error) > 2 * (10 ^ (-5))
        #println(my)
        my = int_simps(n)
        error = my - exact
        n += 1
    end

    println("DUPA")
    println(n)
    println(my)
end

find_appropriate()

function trapezy(a, b)
    ret = b - a
    ret /= 2
    sum = sin(a) + sin(b)
    ret *= sum

    return ret
end

function trap_sum(n)
    delta = pi / n
    val = 0
    for i in 1:n
        val += trapezy((i-1)*delta, i * delta)
    end
    return val
end

function trap_find()
    exact = 2
    error = Inf
    n = 2
    my = Inf

    while abs(error) > 2 * (10 ^ (-5))
        #println(my)
        my = trap_sum(n)
        error = my - exact
        n += 1
    end

    println("CHUJ")
    println(n)
    println(my)
end

trap_find()