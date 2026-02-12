function isEven(n)
{
    // taking bitwise and of n with 1 
    if ((n & 1) === 0) {
        return true;
    }
    else {
        return false;
    }
}

// Driver Code
let n = 15;
if (isEven(n)) {
    console.log("true");
}
else {
    console.log("false");
}