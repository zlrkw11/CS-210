# lab 1

## pointer

```
&
```

is used to pass the **addresses** of the variables a1, a2 and a3 to the function.

```
&a1
```

gives the function the ability to go the house (original variable) and make changes directly to its contents.s

when passing variables without the & sign:

```
function(a1);
```

we are passing in the value stored inside the variable a1.

```
function(int *x);
    *x = 2;
```

this means we are

1. passing a pointer - x pointing to integer value to the function
2. assign the value 2 to the pointer
