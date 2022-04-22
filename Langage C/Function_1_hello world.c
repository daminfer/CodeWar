/* Problème Rank: 8 Kyu

Description:
Make a simple function called greet that returns the most-famous "hello world!".

Style Points:
Sure, this is about as easy as it gets. But how clever can you be to create the most creative 
hello world you can think of? What is a "hello world" solution you would want to show your friends?
*/

char *greet(){
    return "hello world!";
}

// Solution de psycopathe: __asm__(".globl greet\nl: .asciz \"hello world!\"\ngreet: mov $l, %rax\nret\n");