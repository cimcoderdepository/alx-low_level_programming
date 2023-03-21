# What is the difference between Dynamic and Static Library (static and dynamic linking)

Static and dynamic libraries are two different ways of packaging and using code in a software application.

### Static libraries,

Static libraries, also known as `archive libraries`, are collections of object files that are linked directly into an executable program at compile time. This means that all the code from the static library is included in the final executable, resulting in a larger file size. Static libraries are useful when you want to distribute a single executable file that does not depend on any external libraries or system components.

### Dynamic libraries,

Dynamic libraries, also known as `shared libraries` or `DLLs` (Dynamic Link Libraries) in Windows, are separate files that are loaded into memory at runtime and linked with the program code. This allows multiple programs to share the same library code, reducing the overall memory footprint of the system. Dynamic libraries are also updated more easily since you can simply replace the library file without having to recompile the entire program.

Static linking involves linking the object code of a library directly into an executable program at compile time, whereas dynamic linking involves linking the library code with the program at runtime.

In summary, the main difference between dynamic and static libraries is that `static libraries are linked directly into an executable file at compile time`, while `dynamic libraries are linked at runtime and can be shared among multiple programs`.
