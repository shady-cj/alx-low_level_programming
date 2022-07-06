/**
 * print_name - A function that prints a name that's being
 * passed
 * @name: The name to be printed
 * @f: The helper function that prints the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
