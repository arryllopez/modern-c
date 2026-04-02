int main () { 
    int x = 10; // this declares an integer variable named x and initializes it with the value 10 
    int *y = &x; // y is a pointer to an address of an integer 

    print ("the value of x is %d\n", x); // this line prints the value of x to the standard output using the %d format specifier for integers
    print ("the value of y is %p\n", y); // this line prints the value of y, which is the memory address of x, using the %p format specifier for
    // in order to print x using y, we need to DEREFERENCE the pointer y 
    print ("the value of x using y is %d\n", *y); // this line prints the value of x by dereferencing the pointer y, which gives us the value stored at the memory address that y points to (which is x)
}