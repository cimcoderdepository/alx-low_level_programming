# How to use "rm" command to delete multiple files while ignoring specific files

The `rm` command in Linux is used to remove files and directories. To delete multiple files while excluding a few specific ones, you can use a combination of wildcards and exclusion patterns with the `rm` command.

Assuming that you want to delete all the files in a directory except for a few specific files, you can use the following command:

```
rm -r !(file1.txt|file2.txt|file3.txt)
```

This command will delete all the files in the current directory except for `file1.txt`, `file2.txt`, and `file3.txt`.

Here's a breakdown of the command:

 * `rm` is the command to remove files
 * `-r` is an option that specifies to delete directories and their contents recursively
 * `!` is the exclusion pattern, which means "not"
 * `()` is used to group the files you want to exclude
 * `|` is the logical OR operator
 * `file1.txt|file2.txt|file3.txt` are the files you want to exclude from the deletion

Make sure to double-check the list of files you want to exclude and use this command with caution, as it can permanently delete files from your system.
