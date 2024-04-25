/*String Copier*/

#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src)
{
/*
1. Inside the function, Remove the comment and write an empty while loop (both condition and body should be empty) that will be used to traverse the string. You will fill in the loop condition and loop body in later tasks.
2. Inside the loop body, write code that will copy the character pointed to by src into the address stored in dst
3. Increment the src pointer by one so that it points to the next character in the source string.
4. Increment the dst pointer so that it points to the next available space in the destination string.
5. Fill in the loop condition such that the loop stops when the character pointed to by src is the null terminating character ('\0')
6. Since the loop terminated when src was pointing to the terminating character, that character was not copied into the dst string! dst is already pointing to what should be the last character. Set that character to the null terminating character.
*/
  while (*src == '\0')
  {
    *dst = *src;
    src++;
    dst++;
  }
  *dst = '\0';
}
/*
7. Let’s test your new copy function! Inside main(), under the string srcString, create a new string called dstString that will be as long as srcString. Don’t forget to account for the terminating character!
8. Use your copy() function to copy srcString into dstString.
9. Let’s prove that your copy() function works! Print the dstString.
*/
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  
  char dstString[strlen(srcString) + 1];

  strcpy(dstString, srcString);

  printf("%s\n", dstString);
}

/*
Code Explanation

The selected code block is a part of a program that demonstrates string copying in C.

The copy function is defined to copy a string from the source (src) to the destination (dst) character by character until it reaches the null terminator ('\0'). In C, strings are terminated with a null character.

In the main function, a source string (srcString) is declared and initialized with a sentence.

Next, a destination string (dstString) is created with enough space to hold the source string plus one extra character for the null terminator.

The strcpy function is then called to copy the contents of the source string (srcString) to the destination string (dstString).

Finally, the copied string is printed using printf, which formats and outputs the string followed by a newline character to the console.

As a result, when you run the program, you will see the copied string displayed on the console.
*/