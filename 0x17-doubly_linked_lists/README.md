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
