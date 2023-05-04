#ifndef _ARGMANAGER_H
#define _ARGMANAGER_H

/*
 * Searching and storing fucntions. Functions searches in the argv array and 
 * stores the found match to it's corresponding varible in this header.
 */

char *shape(int,char *[]);
char *style(int,char *[]);
char *opts(int,char *[]);
int line(int,char *[]);

/*
 * loc_arr array is used to store the location of matched data from the Functions
 * above.
 * opt_check is used to check entry of the sequntial Functions, style,opts and line;
 */
extern int loc_arr[5];
extern int opt_check=0;

/*
 * This variables are used store the matched values
 */

extern char shape[20];
extern char style[20];
extern char opt[3];
extern int line;
#endif
