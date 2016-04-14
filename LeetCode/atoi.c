/* Implement atoi() to convert a string to an integer.
Requirements: skip initial whitespaces, check for optional sign, check for valid input */

int myAtoi(char* str) {
    int i, result, sign;
    i = result = 0;
    sign = 1;
    
    // check for empty string
    if (str == NULL) {
        return 0;
    }
    
    // iterate through whitespaces
    while (str[i] == ' ') {
        i++;
    }
    
    // check for sign
    if (str[i] == '+') {
        i++;
    }
    else if (str[i] == '-') {
        sign = -1;
        i++;
    }
    
    // check for valid input
    if (str[i] < '0' || str[i] > '9') {
        return 0;
    }
    
    // convert to int
    while (str[i] >= '0' && str[i] <= '9') {
        result = (result * 10) + str[i] - '0';
        i++;
    }
    
    result = sign * result;
    return result;
}