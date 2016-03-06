def alphabetize (arr, rev = false)
    arr.sort!
    if rev 
        arr.reverse!
    end
    arr
end

numbers = [1, 4, 6, 3]
answer = alphabetize(numbers)
puts answer