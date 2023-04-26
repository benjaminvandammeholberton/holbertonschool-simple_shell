## SIMPLE SHELL PROJECT




## Description 📋
The ```simple shell``` is a command-line interface used to interact with the operating system.

The shell acts as an intermediary between the user and the kernel, translating user commands into system calls and managing their execution.

## Requirements 🚩


### General
Allowed editors: ```vi```, ```vim```, ```emacs```

All your files should end with a new line

A ```README.md``` file, at the root of the folder of the project is mandatory

Your code should use the ```Betty style```. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```

Your shell should not have any memory leaks

No more than 5 functions per file

All your header files should be include guarded

Use system calls only when you need to




### List of allowed functions and system calls

- ```access``` (```man 2 access```)

- ```chdir``` (```man 2 chdir```)

- ```close``` (```man 2 close```)

- ```closedir``` (```man 3 closedir```)

- ```execve``` (```man 2 execve```)

- ```exit``` (```man 3 exit```)

- ```_exit``` (```man 2 _exit```)

- ```fflush``` (```man 3 fflush```)

- ```fork``` (```man 2 fork```)

- ```free``` (```man 3 free```)

- ```getcwd``` (```man 3 getcwd```)

- ```getline``` (```man 3 getline```)

- ```getpid``` (```man 2 getpid```)

- ```isatty``` (```man 3 isatty```)

- ```kill``` (```man 2 kill```)

- ```malloc``` (```man 3 malloc```)

- ```open``` (```man 2 open```)

- ```opendir``` (```man 3 opendir```)

- ```perror``` (```man 3 perror```)

- ```read``` (```man 2 read```)

- ```readdir``` (```man 3 readdir```)

- ```signal``` (```man 2 signal```)

- ```stat``` (```__xstat```) (```man 2 stat```)

- ```lstat``` (```__lxstat```) (```man 2 lstat```)

- ```fstat``` (```__fxstat```) (```man 2 fstat```)

- ```strtok``` (```man 3 strtok```)

- ```wait``` (```man 2 wait```)

- ```waitpid``` (```man 2 waitpid```)

- ```wait3``` (```man 2 wait3```)

- ```wait4``` (```man 2 wait4```)

- ```write``` (```man 2 write```)


### Compilation command


compilation :

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

execution :

```
./hsh
```
## Testing 🖇

Our shell should work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

### Checking with ```valgrind```

To check if our program countains memory leaks, we used this command :

```
valgrind <executablefile>
```

Example :

Valgrind dsiplays the prompt where you have to run a command (ls for example) :
```
# valgrind ./hsh
==1265== Memcheck, a memory error detector
==1265== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1265== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==1265== Command: ./hsh
==1265==
$ (enter your command here)
```

When you exit the shell, it gives you a summary of the memory leaks like this :
```
$ exit
==1265==
==1265== HEAP SUMMARY:
==1265==     in use at exit: 0 bytes in 0 blocks
==1265==   total heap usage: 6 allocs, 6 frees, 2,313 bytes allocated
==1265==
==1265== All heap blocks were freed -- no leaks are possible
==1265==
==1265== For lists of detected and suppressed errors, rerun with: -s
==1265== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

## Man page 📋

You can open the man page with this command :

```
man ./man_1_simple_shell
```
## Authors 🖋

This project was realized by Benjamin Vandamme and Quentin Rouger - C20 Holberton LAVAL