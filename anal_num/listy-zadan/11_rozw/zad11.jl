#using SymPy

#x = Sym("x")

#println(integrate(exp(-x) * (cos(x))^2, (x, 0, oo)))

function simpsons_rule(a, b)
    ret = b - a
    ret /= 6
    c = (a+b) / 2
    sum = ((cos(a))^2 * exp(-1 * a)) + ((cos(c))^2 * exp(-1 * c))  + ((cos(b))^2 * exp(-1 * b)) 
    ret *= sum
    return ret
end

function int_simps(n, m)
    delta = m / (2 * n)
    val = 0
    for i in 0:n
        val += simpsons_rule(i * delta, (i+2) * delta)
    end
    return val
end

function find_appropriate()
    exact = BigFloat(3/5)
    error = Inf
    n = 430 #BigFloat(430)
    m = 90 #BigFloat(90)
    my = Inf
    while abs(error) > (10 ^ (-4))
        println(my)
        my = int_simps(n, m)
        error = my - exact
        n += 200
        #m += 200
    end

    println("DUPA")
    println(n) # wyszlo mi, ze musi byc 22 52 30
    println(my)
end

find_appropriate()