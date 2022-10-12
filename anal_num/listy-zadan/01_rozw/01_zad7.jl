using Base

# np 0.6833160899458118

function fl()
    x = one(Float64)

    while x < 2.0
        if x * (1/ x) != 1
            println(x)
            println(x * (1 / x))
            break
        end
        x += eps(x)
    end
end

fl()