int main(int, char*[]) 

// main is a function of type int 
// that takes two parameters: an int and a char*[] (array of char pointers, typically used for command-line arguments)
{
    return 0; // The function returns 0, indicating successful execution
}

//declarations are bound to the scope in which they appear 
//variables generally have block scope

void example() {
    int x = 10;  // inside function block, x is accessible throughout the entire function

    if (x > 5) {
        int y = 20;  // inside if block
    }

    // y is NOT accessible here, since out of scope of the if block
}

printf(&x) // This line will cause a compilation error because x is not declared in this scope.


// this initialziees an array of doubles with specific values at certain indices 
double A[5] = {                                      
   [0] = 9.0,                                         
   [1] = 2.9,
   [4] = 3.E+25,                                      
   [3] = .00007,                                      
};

// this func takes an amount of argcs as int
// then the second paramter is basically a pointer to an array of argc+1 strings 
// the last element is the null pointer which is why argc+1 is used to account for that null pointer at the end of the array

int main(int argc, [[maybe_unused]] char* argv[argc+1]) {
  ...
}

 for (size_t i = 0; i < 5; ++i) {                     
     printf("element %zu is %g, \tits square is %g\n", 
            i,
            A[i],
            A[i]*A[i]);                                
  }                                                    

  // exit_sucess is basically return 0, but it is more explicit and can be used to indicate successful termination of the program
  return EXIT_SUCCESS;                                 


int main(int argc, char* argv[argc+1]) { 
    puts ("Hello, World!"); // puts is a function that writes a string to the standard output followed by a newline character
    if (argc > 1) { // checks if there are more than 1 command-line arguments (the first argument is the program name itself)
        while(true) { 
            puts ("some programs neever stop"); 
        } 
    } else { 
        do { 
            puts ("but this one does"); 
        } while(false);
    }
    return EXIT_SUCCESS; 
}