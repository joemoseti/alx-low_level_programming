#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFERSIZE 1024
#define READ_ERROR 1
#define WRITE_ERROR 2

/* prototype of functions */
ssize_t read_textfile(const char *filename, size_t letters);
