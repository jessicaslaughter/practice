/*jshint multistr:true */

var text = "Hi there I'm Jessica! My name is Jessica aka Jessica.";
var myName = "Jessica";
var hits = [];

for (var i = 0; i < text.length; i++) {
    if (text[i] === 'J') {
        for (var j = i; j < (i + myName.length); j++) {
            hits.push(text[j]);
        }
    }
}

if (hits.length === 0) {
    console.log("Your name wasn't found!");
}
else {
    console.log(hits);
}