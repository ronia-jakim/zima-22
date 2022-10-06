# obliczyc wartosc w(x)=x^3-6x^2+3x-0.149 w punkcie x=4.71 uzywajac arytmetyki Float16, Float32 i Float64. Podac blad wzgledny wyniku, jesli w(4.71)=-14.636489. Powtorzyc dla rownowaznego w(x)=((x-6)x+3)x-0.149. Porownac wyniki

function frst_exp(x, s, t, r)
    ret = zero(x)
    ret = (x^3) - (s*(x^2)) + t*x - r
    print("  ", typeof(x), " wynik: ", ret, "\n")
end

function snd_exp(x, s, t, r)
    ret = zero(x)
    ret = ((x - s) * x + t) * x - r
    print("  ", typeof(x), " wynik: ", ret, "\n")
end

frst_exp(Float16(4.71), Float16(6), Float16(3), Float16(0.149))
frst_exp(Float32(4.71), Float32(6), Float32(3), Float32(0.149))
frst_exp(Float64(4.71), Float64(6), Float64(3), Float64(0.149))

print("alternatywne wyrazenie:\n")

snd_exp(Float16(4.71), Float16(6), Float16(3), Float16(0.149))
snd_exp(Float32(4.71), Float32(6), Float32(3), Float32(0.149))
snd_exp(Float64(4.71), Float64(6), Float64(3), Float64(0.149))