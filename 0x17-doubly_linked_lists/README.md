# 0x17-doubly_linked_lists

Understanding doubly linked list... All function declaration will reside in the `lists.h` header file

## TASKS

### 0. Print list

 **FILES** - 0-print_dlistint.c, 0-main.c
 **TASK** - Write a function that prints all the elements of a `dlistint_t` list.

 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a
9
8
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$
 ```

### 1. List length

 **FILES** - 1-dlistint_len.c, 1-main.c
 **TASK** - Write a function that returns the number of elements in a linked `dlistint_t` list.

 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/0x17. Doubly linked lists$ ./b
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$
 ```


### 2. Add node

 **FILES** - 2-add_dnodeint.c, 2-main.c
 **TASK** - Write a function that adds a new node at the beginning of a dlistint_t list.


 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x17. Doubly linked lists$ ./c
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x17. Doubly linked lists$
 ```

### 3. Add node at the end
 
 **FILES** - 3-add_dnodeint_end.c, 3-main.c
 **TASK** - Write a function that adds a new node at the end of a dlistint_t list.


 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x17. Doubly linked lists$ ./d
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$
 ```


### 4. Free List
 **FILES** - 4-free_dlistint.c, 4-main.c
 **TASK** - Write a function that frees a dlistint_t list.


 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x17. Doubly linked lists$ 
 ```

### 5. Get node at index

 **FILES** - 5-get_dnodeint.c, 5-main.c
 **TASK** - Write a function that returns the nth node of a `dlistint_t` linked list.


 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/0x17. Doubly linked lists$
 ```
