# What is the Size of a Pointer? 

A Pointer are declared using data type. But its size is not dependent
on its data type.
Purpose of data type is for pointer arithmetic. Not for size. 

### In Present day compilers every pointer takes 8 bytes.
* int *p1;
* float *p2;
* double *p3;
* char *p4;
* struct Test *p5; // pointer to structure. 
* Rectangle *p6; // pointer to an object. 

# Declaring and Initialising Pointer. 

### Example:
int x=10; is a data variable.
int *p=&x; p is a pointer and will be pointing on x. p is declared
and initialised.
### Example: 
int x=10; is a data variable.
int *p; p is declared.
p=&x; p is initialised. It will be pointing to x. * is used for
declaration.