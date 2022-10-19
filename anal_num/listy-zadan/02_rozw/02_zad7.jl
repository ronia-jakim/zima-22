using Base

function calc_s(c)
    ret = (1- c)/2
    ret = sqrt(ret)
    return ret
end

function calc_c(c)
    ret = (1 + c)/2
    ret = sqrt(ret)
    return ret
end

function calc_p(s, k)
    return 2^(k-1)*s
end

function alg(k)
    c = BigFloat(0)
    s = BigFloat(1)
    vec_p = Vector{BigFloat}([])
    t = BigFloat(2)

    for i in 2:k
        append!(vec_p, [calc_p(s, t)])
        s = calc_s(c)
        c = calc_c(c)

        t += one(BigFloat)
    end

    return vec_p
end

function alt_alg(n)
    ret = BigFloat(0.5)
    ret *= BigFloat(n)
    arg = 2*pi / n
    ret *= sin(arg)
    return ret
end

function main(k)
    vec = alg(k)

    for i in 1:k-1
        println(2^(i+1), " :: ", vec[i], " || ", alt_alg(2^(i+1)))
    end
end

main(20)