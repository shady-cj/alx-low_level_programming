# ARGC AND ARGV

# ARGC 

    Argc refers to the argument count of a command line argument including the programname
    This count is always 1 or greater due to the fact that you always have to provide
    your program name to compile any program. 

    One of the good use cases of argc is to provide the length of the array(argv, discussed below) in order to iterate/loop through
    It can also be used to determine or detect in our program if a user inputted some additional arguments or flags
    which can serve as a drive for our main program to work in a particular fashion.



# ARGV

    Argc refers to the <i>argument values</i>, or to some <i>argument vectos</i>.  
    This is declared of in form of <b>*argv[]</b> or some <b>**argv</b> which simply means an array of strings in c
    This array consists of the list of arguments passed into a program on the command line when calling the program
    This list includes the command name which can be found at argv[0], remember it is a list so the yes the first index is 0.
    And the last index is argc(argument count discussed above) - 1, meaning if we try to access the array at index argc(length of the array) we get a NULL value
    This set of arrays are useful to pass in some instructions to our program in order for them to function in a particular fashion



# Conclusion.

     We can think of those 2 arguments as a way of passing instructions to a program for then to work in a particular fashion
     A simple scenario to illustrate this is, for instance when we want to cook we get a pot, gas cooker(or whatever means you use to cook)
     water, The pot and gas cooker will act as our program and then whatever the output of that program(The cooking) will be would be based on what we passed into it.

