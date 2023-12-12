#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

int _strlen(char *str);
void ready_to_go(void);
char *read_command(int i);
char **tokenization(char *str);
void execute(char **arr, char *argv, char *buf, char *env[]);
int check_spaces(char *buf);
int search_command(char *command);
void error(char *argv, char *buf);
void b_in_exit(char **arr);
void b_in_env(char **env);

#endif
