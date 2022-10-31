using Base

#setprecision(BigFloat, 512)

function g(f, x)
    pom = x + f(x)
    return (f(pom) - f(x)) / f(x)
end

function stefenson_method(star, f, M)
    x = star
    i = 1
    while i < M
        fx = f(x)
        gx = g(f, x)

        if isnan(gx)
            break
        end

        x = x - fx / gx
        i += 1
    end

    return x
end

function fun(x)
    return exp(-x) - sin(x)
end

ret = stefenson_method(BigFloat(0.7), fun, 10)

println(ret)