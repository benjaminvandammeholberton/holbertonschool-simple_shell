#include "hsh.h"

/**
 * inter_shell - function that runs the Simple Shell in interactive mode
 * Return - 0 on success
 */

int inter_shell(void)
{
        char *buffer = NULL, *path = NULL;
        char **args = NULL;
        int flag = 0, statut, id = 0;

        while (1)
        {
                free(buffer);
                flag = 0;
                buffer = prompt(statut);
                if (strcmp(buffer, "\n") == 0)
                        continue;
                args = tokenize(buffer, " \n");
                path = checkingabsolutepath(args[0]);
                if (path)
                        flag = 1;
                if (path == NULL)
                        path = checkingpath(args[0]);
                                if (path == NULL)
                                {
                                        fprintf(stderr, "hsh: %s: command not found\n", args[0]);
                                        free(args);
                                        statut = 127;  
                                        continue;
                                }
                id = fork();
                if (id == -1)
                        exit (1);
                if (id == 0)
                {
			if (execve(path, args, environ) == -1)
                                exit(1);
                }
                        wait(&statut);
                        free(args);
                        if (flag == 0)
                                free(path);
        }
}
