#include "hsh.h"

/**
 * checkingpath - function that research if a given string is a path to get a programm located in one of directories of the environnement variable "PATH".
 * @strc: the string that has to be checked 
 * Return: pointer to the argument string if
 * success, NULL otherwise 
 */
char *checkingpath (char *args)
{
        char **path = NULL;
        char *strc = NULL;
        char *string = NULL;
        int i = 0;
        int a;
        struct stat st;
    
        string = _getenv("PATH");
        path = tokenize(string, ":");

        while (path[i])
        {
   /*-------*/   free(strc);
   /*-------*/   strc = NULL;
                 strc = concatenate(path[i], "/", args);

                 a = stat(strc, &st);
                 if (a == 0)
                 {
                        free(path);
                        free(string);
                        return (strc);
                 }
                i++;
        }
        free(path);
        free(strc);
        free(string);
        return(NULL);
}
