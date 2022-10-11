using Base

# np 0.6833160899458118

for i in 1:2^20
    x = rand(Float64)
    if (x * (1 / x)) != 1
        println(i)
        println(x)
        break
    end
end