#ifndef ERROR_ARG_H
#define ERROR_ARG_H

#define ERROR_SUCCESS 0
/*
 * Argument erros
 */
#define ERROR_NO_ARGUMENT 1
#define ERROR_FEW_ARGUMENT 2
#define ERROR_MANY_ARGUMENT 3
/*
 * Shape error
 */
#define ERROR_NO_SHAPE 4
#define ERROR_MULTIPLE_SHAPE 5
/*
 * Shape Errors
 */
#define ERROR_NO_STYLE 6
#define ERROR_MULTIPLE_STYLE 7
/*
 * Options Errors
 */
#define ERROR_INVALID_OPTIONS 8
/*
 * Line Errors
 */
#define ERROR_NO_LINE 9
#define ERROR_MULTIPLE_LINES 10
#define ERROR_MAX_LINE_LIMIT 11
/*
 * Argument Errors
 */
#define ERROR_INVALID_ARGUMENT 12
/*
 * This function takes error number and returns the 
 * error string specifed to it.
 * Usage:
 * Specify the error macro in function call.
 * Ex- error_argument(ERROR_NO_ARGUMENT), and print it 
 * via format specifier %s or any or any function [ex- puts].
 */
const char * error_argument(int);
#endif // ! ERROR_ARG_H
