/**
 * mystring.c 
 * 
 * Implementation of all C functions described in mystring.h
 *
 */

#include "mystring.h"

/**
 * Compute the length of the string given as input
 * Length excludes the terminating null byte ('\0')
 * @param *s A const character string 
 * @return The number of characters in the string provided by s
 */

size_t mystrlen(const char* str)
{
	// TODO: Complete the code
}


/**
 * Copies the string contents from source to destination
 * The null byte ('\0') is also copied.
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @return A pointer to the destination string
 */

char* mystrcpy(char* dest, char* src)
{
	// TODO: Complete the code
}

/**
 * Copies the string contents from source to destination.
 * Note that only the first n characters of the source will be copied
 * to the destination. The null byte ('\0') is also copied.
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @param n The size of the data to be copied.
 * @return A pointer to the destination string
 */

char* mystrncpy(char* dest, char* src, size_t n)
{
	// TODO: Complete the code
}


/**
 * Computes the length of the largest prefix of first string consisting
 * entirely of the second string. 
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @return Number of bytes in the largest prefix of s that contains only the
 * characters from accept
 */

size_t mystrspn(const char* s, const char* accept)
{
	// TODO: Complete the code
}


/**
 * Finds the first occurence of the second string in the first string
 * @param string Pointer to the string which needs to be searched
 * @param pattern Pointer to the pattern that is to be searched.
 * @return Finds the first occurance of `pattern` in `string` and returns to
 * that occurance. Returns NULL if pattern is not found.
 */

char* mystrstr(const char* string, const char* pattern)
{
	// TODO: Complete the code
}

/**
 * A function used to concatenate two parts of strings together. Copy up to n bytes.
 * @param dest The pointer to destination
 * @param src The pointer to source 
 * @param n Amount of data to copy
 * @return A char pointer to the destination of the string.
 */
char* mystrncat(char* dest, char* src, size_t n)
{
	// TODO: Complete the code
}
