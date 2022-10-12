# obliczyc wartosc w(x)=x^3-6x^2+3x-0.149 w punkcie x=4.71 uzywajac arytmetyki Float16, Float32 i Float64. Podac blad wzgledny wyniku, jesli w(4.71)=-14.636489. Powtorzyc dla rownowaznego w(x)=((x-6)x+3)x-0.149. Porownac wyniki

function frst_exp(x, s, t, r)
    ret = zero(x)
    ret = (x^3) - (s*(x^2)) + t*x - r
    # print("  ", typeof(x), " wynik: ", ret, " ")
    return ret
end

function snd_exp(x, s, t, r)
    ret = zero(x)
    ret = ((x - s) * x + t) * x - r
    # print("  ", typeof(x), " wynik: ", ret, " ")
    return ret
end

function rel_error(val, exp, mess)
    bez = zero(val)
    if val > exp
        bez = val - exp
    else
        bez = exp - val
    end

    println("Blad wzgledny ", mess, " wynosi: ", bez / exp)
end

t1 = frst_exp(Float16(4.71), Float16(6), Float16(3), Float16(0.149))
t2 = frst_exp(Float32(4.71), Float32(6), Float32(3), Float32(0.149))
t3 = frst_exp(Float64(4.71), Float64(6), Float64(3), Float64(0.149))

rel_error(Float64(t1), Float64(-14.636489), "Float16")
rel_error(Float64(t2), Float64(-14.636489), "Float32")
rel_error(Float64(t3), Float64(-14.636489), "Float64")

print("alternatywne wyrazenie:\n")

t1 = snd_exp(Float16(4.71), Float16(6), Float16(3), Float16(0.149))
t2 = snd_exp(Float32(4.71), Float32(6), Float32(3), Float32(0.149))
t3 = snd_exp(Float64(4.71), Float64(6), Float64(3), Float64(0.149))

rel_error(Float64(t1), Float64(-14.636489), "Float16")
rel_error(Float64(t2), Float64(-14.636489), "Float32")
rel_error(Float64(t3), Float64(-14.636489), "Float64")