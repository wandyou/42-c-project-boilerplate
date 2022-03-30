# C Boilerplate

This repo is used as a simple and quick way to start a C Project in the 42 School fashion

<aside>
💡 Be sure to change the basic file names

</aside>

### Makefile

For now the Makefile contains only one source :

```makefile
SRCS = srcs/main.c
```

To add other ones, you can either add them directly after the main, like this :

```makefile
SRCS = srcs/main.c \
       srcs/other_file.c
```

Or organize them by “categories” and add those categories to the SRCS, like this :

```makefile
OTHER_FILES = srcs/other_file.c

SRCS = srcs/main.c \
       ${OTHER_FILES}
```
