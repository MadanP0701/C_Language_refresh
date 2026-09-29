
      *** Basic terminology *** // Notes by reference of 
      Neso Academy

--> Data = collection of symbols, characters, etc
--> Information = Well processed data

--> Data structure gives us the way to structure the data so 
that we can use it

e.g. arrays(also used in bitmap), stack data structure is used
in redo and undo feature, graphs etc.

Data Type:
    - It defines domain of value and defines operations
      allowed on the value
    - e.g. Bitwise and % operations are NOT ALLOWED in float
    - In user-defined data types, user defines the operations
      allowed in the data type

Abstract Data Type(ADT):
    - ADTs are just like user defined data types
    - It defines behaviour but implementation is not 
      defined, implementation is defined by us
    
    1. client program: Program which uses data structure
    2. implementation: Program which implements data structure

            
           **** Data Structure ****

    A data structure is the organisation of data in a way so that it can be used
    efficiently.

    * Efficient: Less time + Less space consuming (Both at the same time)
    * Data structure is used to implement an ADT:
              - ADT tells us what to do(gives the blueprint)
              - Data structure tells us how to do it
              
              - A data structure can be time efficient or space efficient or both
              - Choosing depends on what user wants
                  
                  
                  
                  ****Types of Data Structure****
              1. Linear data structures: Each element has only one successor and 
                 predecessor(First and last elements can have no predecessor or 
                 successor)...
              2. Non-Linear data structures: Are Not Linear(Tree or Graph)
          
              1. Static Data Structure: Memory is allocated at compile time(Fast access, slow insertion or deletion) --> Arrays
              2. Dynamic Data Structure: Memory is allocated in runtime(Slower access, fast insertion and deletion) --> Linked Lists
            

                        **** Time complexity ****
                        Running time depends on many other factors,
                        time complexity != runtime

              ## Time complexity is the effect on time due to increasing inputs

1. Asymptotic analysis: Approximating by removing unneccessary terms
          - f(n) = 5n**2 +12n + 223; here 12n and 223 are negligible for larger inputs\

Big O notation: Used to measure the performance of any algorithm by providing
                the order of growth of function

                It gives upper bound on a function by which we can make sure that
                the function will never grow faster than upper bound








![Big O](./bigO.jpg)

![Example](Example.png)

![Another example
](Example2.png)

![Another example
](Example3.png)