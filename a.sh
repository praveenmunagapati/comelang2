(cd ../comelang2 && bash fast_build.sh) && bash clean-self-host.sh
bash fast_build.sh
cp ../05function.c.c .
clang -c -o 05function.c.o.tmp 05function.c.c
	clang -o comelang2-sh  01main.c.o.tmp 02transpile.c.o.tmp 03transpile2.c.o.tmp 04heap.c.o.tmp 05function.c.o.tmp 05function2.c.o.tmp 05function3.c.o.tmp 05function4.c.o.tmp 06str.c.o.tmp 07var.c.o.tmp 08if.c.o.tmp 09while.c.o.tmp 10do_while.c.o.tmp 11for.c.o.tmp 12switch.c.o.tmp 13op.c.o.tmp 14struct.c.o.tmp 15union.c.o.tmp 16enum.c.o.tmp 17typedef.c.o.tmp 18field.c.o.tmp 19eq.c.o.tmp 20method.c.o.tmp 21obj.c.o.tmp 22impl.c.o.tmp 23interface.c.o.tmp libcomelang2.c.o.tmp #-gc -L /opt/homebrew/opt/boehmgc/lib/
	cp -p comelang2-sh comelang2

./comelang2 -c 02transpile.c
