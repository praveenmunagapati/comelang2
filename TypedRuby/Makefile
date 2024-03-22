#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/TypedRuby
sysconfdir=${prefix}/etc/TypedRuby
includedir=${prefix}/include/TypedRuby
datarootdir=${prefix}/share/TypedRuby
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
TARGET=TypedRuby
TARGET_DEBUG=TypedRuby-debug

#########################################
# main
#########################################
all: common.h TypedRuby

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
	$(INSTALL) -m 755 ./TypedRuby "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/TypedRuby"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/TypedRuby/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c TypedRuby *.log *.out

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/TypedRuby
	rm -f "$(DESTDIR)/share/doc/TypedRuby/README.md"

run: TypedRuby
	rm -f *.log
	./TypedRuby

debug: TypedRuby-debug
	rm -f *.log
	./TypedRuby-debug
