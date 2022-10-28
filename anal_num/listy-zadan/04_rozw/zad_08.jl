using Base

function steffensen_method(cn, fun, n, n_max)
    if n >= n_max
        return cn
    end

    val = getfield(Main, Symbol(fun))(cn)
    div = getfield(Main, Symbol(fun))(cn+val) - val

    now = cn - (val * val) / div

    return steffensen_method(now, fun, n+1, n_max)
end

function f(x)
    return exp(-x)-sin(x)
end

function t(x)
    return cos(x)
end

start = 0.58

res = steffensen_method(start, f, 0, 10)
println(res)