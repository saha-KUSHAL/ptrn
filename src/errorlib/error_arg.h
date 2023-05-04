#ifndef ERROR_ARG_H
#define ERROR_ARG_H

#define ERROR_SUCCESS 0
/*
 * Argument erros
 */
#define ERROR_NO_ARGUMENT 1
#define ERROR_FEW_ARGUEMNT 2
#define ERROR_MANY_ARGUMENT 3

const char * error_argument(int);
#endif // ! ERROR_ARG_H
