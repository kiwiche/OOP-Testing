# OOP-testing

---
## C++ Polymorphism

### C++ operator overloading 

OOP 重點 ！！！ （物件）＋（物件）

``` 
return_type operator operator_symbol (argument_list)
 {
    //body of function
 }
 ```


### C++ virtual function 

Virtual function dynamically binds function call at runtime and allows it to be overridden by the member function of the derrived class.
Therefore, we need to use a virtual function in the base class, which lets member functions of derived class to **override** it.

``` 
Class class_name
 {
   public:
     virtual return func_name( args.. )
      {
        //function definition
      }
 }
```

### Pure virtual function & Abstruct class 

syntax and structure

``` 
Class class_name
 {
   public:
     virtual return func_name( args.. )
      {
        //function definition
      }
 }
```

# Links
1. [教程](http://www.trytoprogram.com/cplusplus-programming/function-overloading/#)
2. [題型ㄅ](https://medium.com/@earth875/c-c-%E5%B8%B8%E8%A6%8B%E8%A9%A6%E9%A1%8C-961619b14f88)
