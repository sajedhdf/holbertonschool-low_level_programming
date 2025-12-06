# structures_typedef — Task 0: struct dog

## Description
This project introduces structures in C.  
The goal of this task is to define a new type `struct dog` that contains three elements:

- `name`: a pointer to a char
- `age`: a float
- `owner`: a pointer to a char

This structure is declared in the file `dog.h`.

## Files

### dog.h
Contains the definition of `struct dog`.

```c
struct dog
{
    char *name;
    float age;
    char *owner;
};
