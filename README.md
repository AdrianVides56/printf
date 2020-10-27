# Printf project - 0x11. C - printf  
  
The functions in the ```printf()``` family produce output according to a format as described below.  
This repository contains project number 0x11, which basically consists of a clone of the printf function in the C programming language. This is part of the formation process of the Holberton School Colombia Academy.  
Wait!, don't get your hopes up. Here you will only find a mini printf.  
I repeat, this project contains a mini version of the printf function that we can find in the _<stdio.h>_ library.  
  
## File Index
|File           |Description    |
|:-:	        |---	        |
|[_printf.c](https://github.com/AdrianVides56/printf/blob/main/_printf.c)        |It contains two functions. ```_printf()``` is the main function that evaluates that the received format is valid to be processed. If it is valid, call the second function, ```check_formart()```, this function looks for whether the received format specifier is within the format structure. If this specifier is found, it is assigned to the function indicated in the structure in order to perform the printing, taking into account the format received as an argument.  	        |
|[formatspecs.c](https://github.com/AdrianVides56/printf/blob/main/formatspecs.c)        |It contains four functions (```print_c```, ```print_s```, ```print_p```, ```print_num```) that allow the printing of the basic formats (```c```, ```s```, ```%```, ```d```, ```i```).   	        |
|[formatspecs-2.c](https://github.com/AdrianVides56/printf/blob/main/formatspecs-2.c)        |It contains more functions for the advances formats   	        |
|[holberton.h](https://github.com/AdrianVides56/printf/blob/main/holberton.h)           |It contains the prototypes of the functions used that can be found in the other files.   	        |
|[extra-functions.c](https://github.com/AdrianVides56/printf/blob/main/extra-functions.c)       |It contains two tools. The ```_strlen``` function to obtain the length of a string and, the ```_putchar``` functión used to paint character by character on the standard output.               |
|[man_3_printf](https://github.com/AdrianVides56/printf/blob/main/man_3_printf)         |Man page (run ```man ./man_3_printf```)               |  
  
## How To Compile
For compile use this command:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
To use you must call the _```_printf()```_ function as you can see below:
```
_printf("%s", "Hello World");
```  

## How it work
Just like the printf function which receives a variable number of arguments, the _```_printf()```_ function also. These arguments are identified by the percentage sign ```(%)```, as shown in the example above.  
Our function ***currently has the following format thickeners available:***
### **```%c```**: Print a char as shown in the following example:
```
vagrant@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');

        return (0);
}
vagrant@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
vagrant@ubuntu:~/c/printf$ ./printf
Character:[H]
Character:[H]
vagrant@ubuntu:~/c/printf$
```  
  
### **```%s```**: Print a string as show in the following example:
```
vagrant@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");

        return (0);
}
vagrant@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
vagrant@ubuntu:~/c/printf$ ./printf
String:[I am a string !]
String:[I am a string !]
vagrant@ubuntu:~/c/printf$
```  
  
### **```%%```**: Print a percent sign as show in the following example:
```
vagrant@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
        _printf("Percent:[%%]\n");
        printf("Percent:[%%]\n");

        return (0);
}
vagrant@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
vagrant@ubuntu:~/c/printf$ ./printf
Percent:[%]
Percent:[%]
vagrant@ubuntu:~/c/printf$
```  
  
### **```%d```**: Print a integer number [same](https://www.geeksforgeeks.org/difference-d-format-specifier-c-language/) as the format specifier **```%i```**. See example below.
```
vagrant@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
        int len;
        int len2;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);

        return (0);
}
vagrant@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
vagrant@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
vagrant@ubuntu:~/c/printf$
```  
  
### **```%r```**: Print in reverse a string as show in the following example:
```
vagrant@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
        _printf("%r\n", "Hola Mundo al reverso");

        return (0);
}
vagrant@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
vagrant@ubuntu:~/c/printf$ ./printf
osrever la odnuM aloH
vagrant@ubuntu:~/c/printf$
```  
  
## Environment
* Language: C
* OS: Ubuntu 14.04 LTS & Ubuntu 20.04 LTS ([WSL](https://ubuntu.com/wsl))
* Compiler: gcc 4.8.4
*  Style guidelines: [betty-style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc-pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)  
  
## Authors ✒️
* **Adrian Vides** - [AdrianVides56](https://github.com/AdrianVides56)
* **Daniel Eduardo** - [dany-eduard](https://github.com/dany-eduard)  
  
  
  
  
_______________________________________________________________  
  
    
⌨️ con ❤️ por [AdrianVides56](https://github.com/AdrianVides56) & [dany eduard](https://github.com/dany-eduard) 😊
