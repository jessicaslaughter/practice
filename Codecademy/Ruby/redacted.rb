puts "Enter the text to be searched: "
text = gets.chomp
puts "Enter the word to be redacted: "
redact = gets.chomp

words = text.split(" ")

words.each do |word|
    if word == redact
        print "REDACTED "
    else
        print word + " "
    end
end