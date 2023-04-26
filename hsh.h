#ifndef HSH_H
#define HSH_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

extern char **environ;

char **tokenize(char *str, char *delim);
char *concatenate(char *str1, char *str2, char *str3);
char *checkingpath(char *args);
char *_getenv(const char *name);
char *checkingdirectory(char *str);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);
int _strlen(const char *s);
char *prompt(int statut);
int inter_shell(void);
int noninter_shell(void);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *prompt2(int statut);
void exit_shell(void);
void checkinexitbuiltin(char *input);
void freeargsandinput(char **args, char *input);


#endif
