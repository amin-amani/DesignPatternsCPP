# C++ Initialization Methods

* Direct Assignment

Direct assignment uses the equals sign (=) to assign an initial value to a variable. 
This method copies the value on the right-hand side of the equals sign to the variable on the left-hand side. 
It is a carryover from C and is often used for its simplicity and readability. For complex types, 
copy initialization can be less efficient than other initialization methods, 
although C++17 has mitigated many of these issues.
An example of direct assignment is int width = 5;.

* Direct List Initialization

Direct list initialization uses curly braces {} to enclose the initial value.
This method is more modern and consistent, as it works in most cases and disallows narrowing conversions,
which can prevent unintended data loss. Direct list initialization can also initialize objects with a list of values.
An example is int d { 7 };. It is generally preferred in modern C++.

* Copy List InitializationCopy List Initialization

Copy list initialization combines the equals sign and curly braces, such as int e = { 8 };. 
Similar to direct list initialization, it provides a consistent syntax for initializing variables 
and prevents narrowing conversions. Copy list initialization can also be used to initialize objects with a list of values. 
However, there are some differences in behavior, especially when dealing with explicit constructors or auto deduction.
For example, copy-list-initialization will not work if an explicit constructor is chose
