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



### 6. Sum list
 
 **FILES** - 6-sum_dlistint.c, 6-main.c
 **TASK** - Write a function that returns the sum of all the data (n) of a dlistint_t linked list.


 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/0x17. Doubly linked lists$ ./i
sum = 1534
julien@ubuntu:~/0x17. Doubly linked lists$
 ```



### 7. Insert at index

 **FILES** - 7-insert_dnodeint.c, 7-main.c
 **TASK** - Write a function that inserts a new node at a given position.


 **USAGE** 
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/0x17. Doubly linked lists$ ./j
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$
 ```

### 8. Delete at index
 **FILES** - 8-delete_dnodeint.c, 8-main.c
 **TASK** - Write a function that deletes the node at index index of a dlistint_t linked list.


 **USAGE**
 ```
 julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/0x17. Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/0x17. Doubly linked lists$
 ```

### 9. Crackme4
 **FILES** - 100-password
 **TASK** - Find the password for crackme4.
 * Save the password in the file 100-password
 * Your file should contain the exact password, no new line, no extra space
 * Hint: The program prints “OK” when the password is correct

### 10. Palindromes
 **FILES** - 102-result
 **TASK** - A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 Find the largest palindrome made from the product of two 3-digit numbers.
 * Save the result in the file 102-result
 * Your file should contain the exact result, no new line, no extra space



