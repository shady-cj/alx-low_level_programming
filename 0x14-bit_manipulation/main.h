#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int convert_to_binary_num(char c);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int _pow(int x, int y);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
#endif
