#include "hsh.h"


char ** tokenize(char *str, char *delim)
{
        char **argv = NULL;
        char *str_cpy = NULL;
        char *token = NULL;
        int i = 0;
        int count = 1;

        str_cpy = strdup(str);

        token = strtok(str_cpy, delim);
        while(token)
        {
                token = strtok(NULL, delim);
                count++;
        }

        argv = malloc (sizeof(char *) * count);

        if (argv == NULL)
        {
                return (NULL);
        }
        token = strtok(str, delim);
             
        while (token)
        {
                argv[i] = token;
                token = strtok(NULL, delim);
                i++;         
        }
        argv[i] = NULL;
        
        free(str_cpy);
        return (argv);
}