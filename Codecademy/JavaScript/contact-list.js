var friends = {};

friends.bill = {
    firstName: "Bill",
    lastName: "Gates",
    number: "(111) 111-1111)",
    address: ['1', 'Something', 'Way']
};

friends.steve = {
    firstName: "Steve",
    lastName: "Jobs",
    number: "(222) 222-2222",
    address: ['2', 'Something', 'Drive']
};

friends.sean = {
    firstName: "Jessica",
    lastName: "Slaughter",
    number: "(333) 333-3333",
    address: ['3', 'Something', 'Road']
};
    
var list = function (friends) {
    for (var key in friends) {
        console.log(key);
    }
}
    
var search = function(name) {
    for (var key in friends) {
        if (name === friends[key].firstName) {
            console.log(friends[key]);
            return friends[key];
        }
    }
};
    
list(friends);
search("Jessica");