#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/TypeScriptForRuby
sysconfdir=${prefix}/etc/TypeScriptForRuby
includedir=${prefix}/include/TypeScriptForRuby
datarootdir=${prefix}/share/TypeScriptForRuby
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=comelang2
INSTALL=install
CFLAGS= -common-header -O2 
CFLAGS_DEBUG= -common-header -gdwarf-4 -cg 
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
TARGET=TypeScriptForRuby
TARGET_DEBUG=TypeScriptForRuby-debug

#########################################
# main
#########################################
all: common.h TypeScriptForRuby

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DEBUG): $(OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.c header
	$(CC) $(CFLAGS) -c $< -o $@

#########################################
# header
#########################################

header:
	comelang2 header $(SINGLE_SRCS)

common.h: *.c
	bash -c 'shopt -s extglob; comelang2 header !(*.c).c'

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./TypeScriptForRuby "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/TypeScriptForRuby"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/TypeScriptForRuby/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c TypeScriptForRuby *.log *.out

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/TypeScriptForRuby
	rm -f "$(DESTDIR)/share/doc/TypeScriptForRuby/README.md"

run: TypeScriptForRuby
	rm -f *.log
	./TypeScriptForRuby

debug: TypeScriptForRuby-debug
	rm -f *.log
	./TypeScriptForRuby-debug
