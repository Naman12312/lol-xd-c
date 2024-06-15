Types of Pointers in C:

# Void Pointer: A general purpose pointer that can point to any variable of any data type. This pointer has an unspecified data type, and it can point to any variable with any data type. Before dereferencing a void pointer, it must be typecasted into the respective data type.
## For an Example, refer to ./voidPointers.c


# NULL pointer: A pointer that points to NULL( which is defined as a (void*)0 (0 typecasted as a void pointer)). BBasically, it points to nothing. For an example, refer to ./NULLPointers.c


# Dangling pointer: A pointer that points to a variable that has been deleted. A pointer may  become a dangling pointer because of the following reasons:
```
1. If the pointer is a dynamically allocated array and the memory is freed.

2. If a pointer is defined as the value returned by a function  which itself is defined to return the address of a local variable. That local variable will be deleted as the function returns, and the pointer will become a dangling pointer.

3. If the pointer points to a variable and that variable goes out of scope, the pointer will become a dangling pointer.



For an example, refer to ./danglingPointers.c
```




# Wild pointer: An uninitialized pointer is called a Wild pointer. e.g - int* ptr; .          For an example, refer to ./wildPointers.c
