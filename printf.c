  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * printf function - This program shows how to use the printf function in C
   */

#include <stdio.h>

int main()
{
	char a = 'A';
	int b = 6;
	float f = 23.3;
	long l = 20000000;
	printf("A: %c and B: %d and F: %f and D: %ld", a, b, f, l );

	int r = 65;
	char c = r;
	printf("\n\n%d", c);
	
	/* Escape Sequences 
	1. \n - new line
	2. \t - tab
	3. \r - Carriage Return
	4. \a - bell
	*/

	printf("\"\n"); // Prints: "
	printf("%%\n"); // Prints: %

	int n = 21678;
	printf("\n%10d", n); // Prints: " 2"  -- Right Justified
	printf("\n%010d", n); // Prints: "02"  -- Right Justified with 0
	printf("\n%-10d \n", n); // -- Left Justified

	int width = 7;
	int value = 7886;
	printf("%*d\n", width, value); // Right Justified with auto width adjustment

	int x = 17;
	printf("\n%05d", x);  /* "00017" */
	
	return 0;
}

