![alt text](image-2.png)

    1. text segment is read only

    2.static --> initialised + uninitialised static or global variable


    3.heap --> You manually request space on the heap, and you must explicitly release it to prevent memory leaks, useful for linked lists

    4.stack --> contains local variables, function calls, etc
                - It reads later data first
                - Last in first out principle

                
    5. Local var, static var, global var
        (a) local: in the scope 
        (b) static: limited to scope if declared inside function
                    limited to file if declared inside file like global
        (c) global: can be accessed by any file








.



    Void pointers can point to any type of memory and can 
    be type caste
   



    NULL pointers point to uninitialised pointers(Pointers 
    which point to nowhere)

    Dangling pointer points to non existing memory location
    e.g. int* ptr = (int* )malloc(sizeof(int))
         free(ptr);
    
         Now this pointer has non existing memory loc.; 
         i.e it is dangling ptr
         It is pointing to deallocated memory
    Wild Pointers: Uninitialised pointers
      - Points to arbritrary loc, may cause program
        to crash
malloc(): malloc is used to dynamically allocate a single large block of contiguous memory according to the size specified. It returns a VOID pointer and it takes size in bytes

calloc(): calloc function is used for same purpose but it can allocate multiple blocks of it

realloc(): realloc is used to change memory size without loosing changing old data

After using free(), point the pointer to NULL