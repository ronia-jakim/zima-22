using Base
using Polynomials

setprecision(BigFloat, 128)

function bairstow_method(n, a, u, v, M)
    b = Polynomial([zero(u)])
    c = Polynomial([zero(u)])

    b[n] = a[n]
    c[n] = zero(u)
    c[n-1] = a[n]

    for j in 1:M
        b[n-1] = a[n-1] + u * b[n]
        k = n-2
        while k >= 0
            b[k] = a[k] + u * b[k+1] + v * b[k+2]
            c[k] = b[k+1] + u * c[k+1] + v * c[k+2]
            k -= 1
        end
        
        J = c[0] * c[2] - (c[1])^2
        u += (c[1] * b[1] - c[2] * b[0]) / J
        v += (c[1] * b[0] - c[0] * b[1]) / J

    end

    #println("u: ", u, " v: ", v, " b0: ", b[0], " b1: ", b[1])

    return [u, v]

end

# ÷

function main(inp, u, v, M)
    ret = string(inp) * " = "
    roots = []
    
    while size(inp)[1] > 2
        coef = bairstow_method(size(inp)[1], inp, u, v, M)
        a = coef[1]/2
        b = sqrt(-coef[2]- a^2)

        pom = Complex(a, b)
        append!(roots, [pom])
        pom = Complex(a, -b)
        append!(roots, [pom])

        div = Polynomial([-coef[2], -coef[1], 1])
        inp = inp ÷ div
        ret *= "(" * string(div) * ")"
    end

    ret *= "(" * string(inp) * ")"

    println(ret)
    for i in 1:size(roots)[1]
        println(roots[i])
    end
end

pol = Polynomial([BigFloat(1.0), BigFloat(2.0), BigFloat(3.0), BigFloat(4.0), BigFloat(5.0)])

main(pol, BigFloat(0.1), BigFloat(0.1), 10)

println("===================================")


pysio = roots(Polynomial([1, 2, 3, 4, 5]))

for i in 1:size(pysio)[1]
    println(pysio[i])
end
