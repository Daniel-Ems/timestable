CPPFLAGS+=	-Wall -Wextra -Wpedantic

CFLAGS+=-std=c11

LDLIBS += -lm

timestable: timestable.c
