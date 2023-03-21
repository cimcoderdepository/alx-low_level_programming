# WHAT ARE THE BASIC USAGE: `nm`, `ldd`, `ldconfig`

The `nm`, `ld`, and `ldconfig` are all command-line utilities commonly found in Linux-based operating systems.

 * `nm`: The nm (short for "symbol table manager") command is used to display information about the symbols in a compiled binary file or object file. The symbols are identifiers used by the linker to resolve references between different object files or libraries during the linking phase of the compilation process. The nm command can be used to list the symbols and their attributes, such as their types (e.g., function, data object, etc.), their addresses in memory, and their sizes.

 * `ldd`: The ldd (short for "list dynamic dependencies") command is used to list the shared libraries on which a binary file or object file depends. When a program is compiled, it may depend on certain shared libraries (also known as dynamic libraries) that are not linked statically into the program's executable file. Instead, these libraries are loaded dynamically at runtime by the operating system. The ldd command can be used to determine which shared libraries a program depends on and their paths.

 * `ldconfig`: The ldconfig command is used to configure the dynamic linker run-time bindings. It is used to update the cache of shared libraries that the dynamic linker uses to locate the shared libraries at runtime. When a program is executed, the dynamic linker searches for the shared libraries that the program depends on. The ldconfig command updates the cache of shared libraries and their paths so that the dynamic linker can find them quickly and efficiently at runtime.

Overall, these utilities are useful for debugging and troubleshooting software dependencies in Linux-based operating systems.
