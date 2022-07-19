/* comparestrings.c
 *    Source file for comparestrings, a program that compares two strings, and
 *    returns whether they are equal or not.
 *
 *    Example program from Kochan, Stephan G., "Programming in C 3rd ed.",
 *    Sams Publishing. Page 204.
 *
*/


#include <stdio.h>
#include <stdbool.h>

bool equalstrings(const char s1[], const char s2[]);

int main(int argc, char *argv[]) {


    const char s1[] = "string one is awesome!";
    const char s2[] = "string one is awesome!";

    if(equalstrings(s1, s2))
        printf("The strings are equal.\n");
    else
        printf("The strings are unequal.\n");


    return(0);
}




bool equalstrings(const char s1[], const char s2[]) {

    int i;
    bool areEqual;

    i = 0;
    while((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        ++i;

    if(s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else
        areEqual = false;

    return(areEqual);
}
