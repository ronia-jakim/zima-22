using Base

function to_number(str::AbstractString)
    if length(str) <= 64
        bias = Float64(2^10 - 1)

        ret = Float64(0)
        cech = Float64(0) # 11
        man = Float64(1) # 53

        c = Float64(1)

        for i = 1:11
            cech += c * (Float64(str[13 - i]) - Float64(48))
            c *= Float64(2)
        end

        c = Float64(0.5)

        for i = 1:52
            man += c * (Float64(str[i+12]) - Float64(48))

            c /= Float64(2)
        end

        cech -= bias

        ret = man * (2 ^ cech)

        if str[1] == '1'
            ret *= Float64(-1)
        end

        return ret
    else
        print("this is not a representation of a Float64")
        return NaN
    end
end

function rand_test()

    print("BARDZO DOBRY TESCIK POPRAWNOSCI\n")

    for i=1:2^30
        test = rand(Float64)
        wyn = to_number(bitstring(test))
        
        if test != wyn
            print("ZJEBALAS\n")
            break
        #else
            #print(test, ": ", wyn, "\n")
        elseif i == 2^30
            print("SUKCES!!!!\n")
        end
    end

end

eps_test()