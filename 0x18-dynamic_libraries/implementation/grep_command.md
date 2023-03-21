# HOW TO USE "grep" COMMAND TO SEARCH FOR FILE KEYWORD IN A DIRECTORY

To use the grep command to search for a keyword in a file in a directory, follow these steps:

1. Open the terminal on your computer.

2. Navigate to the directory where you want to search for the keyword using the cd command.

3. Use the grep command followed by the keyword you want to search for and the name of the file you want to search in. For example, if you want to search for the keyword "example" in a file named "file.txt", the command would look like this:

```
grep "example" file.txt
```
4. If you want to search for the keyword in multiple files in the directory, you can use the wildcard character * to search for all files that match a pattern. For example, if you want to search for the keyword in all text files in the current directory, you can use the following command:
```
grep "example" *.txt
```
This command will search for the keyword "example" in all files with the .txt extension in the current directory.


5. If you want to search for the keyword in all files in the directory and its subdirectories, you can use the -r or -R option with the grep command. For example:
```
grep -r "example" .
```

This command will search for the keyword "example" in all files in the current directory and its subdirectories.

Note that the grep command is case-sensitive by default. To perform a case-insensitive search, use the `-i` option with the command.
