#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_print(ht);
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "hetairas", "Value");
    hash_table_set(ht, "mentioner", "cool");
    hash_table_set(ht, "heliotropes", "neurospora");
    hash_table_set(ht, "neurospora", "cool");
    hash_table_set(ht, "depravement", "serafins");
    hash_table_set(ht, "serafins", "cool");
    hash_table_set(ht, "serafins", "bad");
    hash_table_set(ht, "neurospora", "okay");
    hash_table_set(ht, "mentioner", "name");
    hash_table_set(ht, "depravement", "okay");
    hash_table_set(ht, "hetairas", "cooler");
    hash_table_set(ht, "heliotropes", "Cooler");


    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
