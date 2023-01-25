function gauss(matrix, n)
    for i in 1:(n-1)
        pivot = matrix[i, i]
        for j in (i+1):n
            base = matrix[j, i] / pivot
            matrix[j,:] = matrix[j,:] - (base .* matrix[i, :])
        end
    end
    return matrix
end

function back_sbt(A, n)
    b = A[:, end]
    b[end] /= A[end, end-1]
    for i in n-1:-1:1
      pivot = A[i,i]
      b[i] -= sum(A[i,i+1:end-1] .* b[i+1:end])
      b[i] /= pivot
    end
    return b
  end


A = rand(Float64, 100, 100)

b = rand(Float64, 100, 1)

A = [
    2 -1 1;
    1 1 0;
    3 -1 -2
]
n = size(A, 1)

#U = gauss(A, n)
U = [
    2 -1 1;
    0 1.5 -0.5;
    0 0 (-10/3)
]
println(U)
x = back_sbt(U, n)
println(x)

#x = \(A, b)
#y = backsub(A, b)

#println( x == b )

#@time \(A, b)

#@time backsub(A, b)

