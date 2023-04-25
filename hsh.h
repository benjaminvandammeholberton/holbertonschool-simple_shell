#ifndef HSH_H
#define HSH_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char ** environ;

char ** tokenize(char *str, char *delim);
char *concatenate(char *str1, char *str2, char *str3);
char *checkingpath (char *args);
char *_getenv(const char *name);
char *checkingabsolutepath (char *str);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);
int _strlen(char *s);
char *prompt (int statut);
int inter_shell(void);
int noninter_shell(void);


#endif
