
    #include <stdarg.c>
//we include this libary to use va_list and va_end

char oussama(int num , ...); //we could this function : varg function take a lot  of argument  

// if we work at varg funtions we have to initilaze macors 

// first macro is va_list he pointed to fisrt argument ( ... )
// arg he play on this example count of argument we need
va_list arg ; // this is prototype of valist macros 
// is not variable !!!!!



//second macro we have va_start 
//this macro is help to find start of arguments we need and use it 
//we give two arguments  is this macro 
//fisr arg : is this macro  we creat before creat va_start ,because he need to know first point to start // first arg pointed

// second num : is this parametre we creat in the start function in this example is num // he play pointe to stop // he take last parametre we creat in this example is num

// in another example if we have 3 parametre 
				//in this example num 3 is the last parametre we creat sooo is second parametre in va_start
void ouss(int num1, int num2 , int num3 , ...);

va_start (arg ,num);
// brrooooooo is not variable xd



//third macro we have is is va_arg :)
//this macro is very importatnt because he move between our arguments he pointed a first argument and second and third ..... 
//he need two argument 
// first is arg : argument we need to pointed to group of atgumentswe have we help to pointed a second arg we need 
// second is int : int this exapmle we have type int , in another examples we found a lot of type(char , int float ....) ,on this example we need int becouse we need to creat a lot 
//of argument on type int  ::: couse agaain we need to move in anther argument by 4 bythe :;; sooooo we move 4byte on 4byte in this exemple in another exapmle we found char or flot sooo that its 
va_arg(arg,int);




//in the last macro we have ve_end thats meens end of argumnets sooo end of our function // we have a start in same time we have end 
// we have a argumnent is arg
// arg : is macro we creat in va_list 
//we type va_end (arg) to say our funtion that is end  of this macro so stop baliz
va_end(arg);


//thts sit i wish you undrstand this file so tnx gg //


# Ft_Printf Tester Link
https://github.com/Abaker-Hype/42-Cursus-Tester

# Ft_Printf

A partial reimplementation of the printf in C. Handles only the following conversions.

| Conversion | Short Description                                                                             |
|------------|-----------------------------------------------------------------------------------------------|
| %c         | Print a single character.                                                                     |
| %s         | Print a string of characters.                                                                 |
| %p         | The void * pointer argument is printed in hexadecimal.                                        |
| %d         | Print a decimal (base 10) number.                                                             |
| %i         | Print an integer in base 10.                                                                  |
| %u         | Print an unsigned decimal (base 10) number.                                                   |
| %x         | Print a number in hexadecimal (base 16), with lowercase.                                      |
| %X         | Print a number in hexadecimal (base 16), with uppercase.                                      |
| %%         | Print a percent sign.                                                                         |





					made by		//////		Dx		///


