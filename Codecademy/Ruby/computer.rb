class Computer
    @@users = {}
    
    def initialize (username, password)
        @username = username
        @password = password
        @files = {}
        @@users[username] = password
    end
    
    def create(filename)
        time = Time.now
        @files[filename] = time
        puts "A new file was created with filename: #{filename} and username: @{username}, at time: #{time}"
    end
    
    def Computer.get_users
        @@users
    end
end

my_computer = Computer.new("jessicaslaughter", 12345)