# OOP-testing

---
## C++ Polymorphism

### C++ operator overloading : Syntax

OOP 重點 ！！！
物件＋物件
``` 
return_type operator operator_symbol (argument_list)
 {
    //body of function
 }
 ```
[binary_operator_overloading.cpp](https://github.com/kiwiche/OOP-Testing/blob/main/binary_operator_overloading.cpp)

### C++ virtual function : Syntax

Virtual function dynamically binds function call at runtime and allows it to be overridden by the member function of the derrived class.
虛擬函數可以覆蓋 " Base => Derrived "

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
[virtual_functions.cpp](https://github.com/kiwiche/OOP-Testing/blob/main/virtual_functions.cpp)

## Reference link
1. http://www.trytoprogram.com/cplusplus-programming/function-overloading/#
2. https://medium.com/@earth875/c-c-%E5%B8%B8%E8%A6%8B%E8%A9%A6%E9%A1%8C-961619b14f88
