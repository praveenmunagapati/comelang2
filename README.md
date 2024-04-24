
# comelang2

come together!

Another modern C compiler. It has a heap system that is a cross between an automatically-free-system and a reference-counted GC, and includes a collection library and a string library. In debug mode, we add as many memory-safe features as possible to the C language.

もう一つのモダンなCコンパイラ。automatically-free-systemとリファレンスカウントGCの間をとったようなヒープシステムがありコレクションライブラリ、文字列ライブラリを備えてます。デバッグモードではC言語にできる限りのメモリセーフの機能を加えてます。

version 30.1

``` C
#include <comelang2.h>

int fun(int x=123, int y = 234, int z = 345) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

int, string fun2() 
{
    return (1, string("ABC"))
}

struct sData
{
    int a;
    int b;
};

sData*% sData*::initialize(sData*% self, int a, int b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

int putc(int c, FILE* f) version 2
{
    inherit(c, f);
    puts("");
    
    return 1;
}

int main() 
{
    puts("HO!" * 3);             // HO!HO!HO!\n
    puts(xsprintf("%d", 1+1));   // 2\n
    
    3.times { puts(("HO" + "!") * 3); }    // HO!HO!HO!\nHO!HO!HO!\nHO!HO!HO!\n
    
    int xxx = 123;
    
    3.times {
        xxx+=2;
        printf("xxx %d\n", xxx); // xxx 125\nxxx 127\nxxx 129\n
    }
    printf("xxx %d\n", xxx); // xxx 129\n

    var li = ["AAA", "BBB", "CCC"]

    foreach(it, li) {
        puts(it);           // AAA\nBBB\nCCC\n
    }
    
    [1,2,3].each {
        printf("%d\n", it);   //1\n2\n3\n
    }

    var m = ["AAA":1, "BBB":2, "CCC":3]
    
    foreach(key, m) {
        var item = m[key];

        printf("%s %d\n", key, item); // AAA 1\nBBB 2\nCCC 3\n
    }

    puts("ABC".substring(0,1));   // A\n

    int fd = open("ABC", O_RDONLY).except {
        fprintf(stderr, "can't open ABC");
        exit(1);
    }

    3.times {
        puts("HELLO METHOD BLOCK");
    }

    var li2 = [1,2,3]

    li.filter { return it > 1; }.each {
        printf("%d\n", it);       // 2\n3\n
    }
    
    var li2 = ["1", "2", "3", "4", "5"]

    [3,1,2,7].filter { return it > 2; }.each { printf("%d\n", it); }   // 3\n7\n
    
    var ma1 = ["AAA":1, "BBB":2, "CCC":3];
    
    if(ma1["AAA"] == 1 && ma1["BBB"] == 2 && ma1["CCC"] == 3) {
        puts("OK");
    }
    
    fopen("AAA", "w").fprintf("ABC\n").fclose();
    
    fopen_block("AAA", "r") {
        it.read().print();   // ABC\n
    }
    
    puts("AAA".read());   // ABC\n\n
    
    unlink("AAA");
    
    stdin.readlines().map { return it.strip(); }.join(",").printf("[%s]\n"); // if stdin is aaa\nbbb\nccc --> [aaa,bbb,ccc]\n
    
    int, int, char* t1 = (1,2,"ABC");
    
    xassert("tuple value test1", t1.v1 == 1 && t1.v2 == 2 && t1.v3 === "ABC");
    
    xassert("string equals test1", "ABC" === "ABC");
    xassert("operator overload test", "ABC" * 2 === "ABCABC");
    xassert("operator overload test", "ABC" + "DEF" === "ABCDEF");
    xassert("operator overload test2", [1,2] + [3] === [1,2,3]);
    xassert("operator overload test3", [1,2] * 2 === [1,2,1,2]);
    
    var z = [1,2,3];
    
    z.add(4).add(5);
    
    xassert("list test", z === [1,2,3,4,5]);
    
    z[1] = 22;
    
    xassert("operator overload test", z[0] == 1 && z[1] == 22 && z[2] == 3);
    
    var zz = ["AAA":1, "BBB":2, "CCC":3];
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3);
    
    zz["DDD"] = 4
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3 && z["DDD"] == 4);
    
    fun(y:2,x:1);  // print x 1 y 2 z 345
    
    putc('X');     // print X\n
    
    var l, m = fun2();
    
    xassert("multiple return", l == 1 && m === "ABC");
    
    "12345\n".write("AAA");
    "12345\n".write("AAA", append:true);
    
    printf("AAA".read());  // print out 12345\n12345\n
    
    var data = new sData(3,5);
    
    xassert("class test", data.a == 3 && data.b == 5);
    
    var z = [new sData(1,2), new sData(3,4)];
    
    int x = 2;
    ([1,2] + [3]).each {
        printf("%d\n", it*x);  // 1\n6\n9\n
        x = 3;
    }
    
    printf("x %d\n", x);   // x 3\n
    
    ["1","7","3","2","9"].map { return atoi(it); }.each { // 1\n7\n3\n2\n9\n
        printf("%d\n", it);
    }
    
    int zzz = 123;
    puts(s"zzz == \{zzz}");    // zzz == 123
    
    puts(s"zzz == $zzz");      // zzz == 123
    
    puts(s"1+1 == \{1+1}");    // 1+1 == 2
    
    var str2 = string("ABCDEF");
    
    puts(str2[0..2]);          // AB
    
    var list1 = [1,2,3,4,5];
    
    puts(list1[0..2]);   // [1,2]
    
    puts(1);             // 1
    
    int fd2 = open("SEX", 0) or die("NO SEX"); // system call error handling
    
    FILE* f2 = fopen("SEX", 0) and die("NO SEX"); // returned null function errror handling

    return 0;
}
```

1. Compatible with C language. The C preprocessor also works.

2. There are automatically-free-systems like Rust, V, and Nim.

3. There are generics and inline functions.

4. There is a mixin-layer system. You can implement your application layer by layer.

5. There is an interface. Polymorphism can be implemented.

6. There is a Ruby-like method block.

7. Supports default parameters and parameter labels.

8. There are operator overloads.

9. I have an expression embedded string.

10. Using nil prevents null segmentation fault.

11. There are smart pointers that are memory safe and do not cause segmentation faults.

12. Has memory leak detection function.

13. Array range check. 

1. C言語と互換性があります。Cプリプロセッサーも動きます。

2. RustやVやNimのようなautomatically-free-systemがあります。

3. ジェネリクスとinline関数があります。

4. mixin-layerシステムがあります。レイヤーを重ねるようにアプリケーションを実装できます。

5. インターフェースがあります。多態が実装できます。

6. Rubyのようなメソッドブロックがあります。

7. デフォルトパラメータとパラメーターラベルをサポートしています。

8. 演算子のオーバーロードがあります。 

9. 式埋め込み文字列があります。

10. nilを使うとnull segmentation faultが防げます。

11. メモリーセーフなセグメンテーションフォルトを起こさないスマートポインターがあります。

12. メモリリーク検出機能があります。

13. 配列の範囲外アクセスをチェックします。

# インストール

Requires clang, make, autoconf, valgrind, gdb, lldb, musl-dev (alpine linux), and pcre-dev.

bash fast_build.sh will automatically install the necessary packages.

Supports Linux, MacOS (Darwin), iSH (iPhone), termux (Android) userland (Android), and raspberry pi.

This is a quick build.

clangとmake, autoconf, valgrind, gdb, lldb, musl-dev(alpine linux), pcre-devが必要です。

bash fast_build.shとすると自動的に必要なパッケージがインストールされます。

LinuxとMacOS(Darwin), iSH(iPhone), termux(Android) userland(Android), raspberry piをサポートしています。

早いビルドはこれです。

```
git clone https://github.com/ab25cq/comelang2
cd comelang2
bash fast_build.sh
```

セルフホストする場合はこちらです。

Click here if you want to self-host.

```
git clone https://github.com/ab25cq/comelang2
cd comelang2
bash fast_build.sh
bash clean-self-host.sh
bash fast_build.sh (getting with -O2 comelang2)
```

To install a vi clone called vin, a string processing interpreter called zed, a console filer called mf, and an original shell called shsh, do the following:

vinというviクローン、zedという文字列処理インタプリタ、mfというコンソールファイラ、shshというオリジナルのシェルをインストールするには以下のようにします。

```
bash all_build.sh
```

# Histories

30.1 List load element([]) requires ?? if item was not found. And fiexed bug of Null guard

30.0 Map load element([]) requires ?? if item was not found.

20.3 Debugged.

20.2 Debugged.

20.1.1 Debugged.

20.1.0 Start Typed Ruby project and Debugged. I will debug comelang2 by creating my private projects.

20.0.7 Debugged.

20.0.6 メソッドコールも型安全になりました。（デバッグモードで）

20.0.5 ポインタのderefference, 配列のアクセス、フィールドのアクセスにnull checkerを入れました。-cgオプションで有効になります。

20.0.4 配列をbufferに変換できるようになりました。

20.0.3 配列のスマートポインター変換を入れました。

20.0.2 配列の範囲チェックを入れました。

20.0.1 オプションのバグを修正しました。

20.0.0 The documentation has been improved.

20.0.0 ドキュメントを整備しました。

# Language specifications

The syntax is almost the same as C language. It may not be POSIX compliant. If you do not #include <comelang2.h>, you can use it as a normal C compiler.

文法はC言語とほとんど一緒です。POSIXに準拠しているとは言えないかもしれません。#include <comelang2.h>をしないと普通のCコンパイラとして使えます。

# HELLO WORLD

```
> vim a.c
#include <stdio.h>

int main()
{
    puts("HELLO WORLD");
    return 0;
}
> comelang2 a.c
> ./a
HELLO WORLD
```

# grammar

It is not POSIX compliant, but is compatible with the C language. I think most C header files can be included as is.

POSIXには準拠していませんが、C言語と互換性があります。大抵のCヘッダーファイルはそのままincludeできると思います。

# Libraries

The grammar library includes list, map, tuple, buffer, and string. There is no vector.

ライブラリにはlist, map, tuple, buffer, stringがあります。vectorはありません。

# list

```
#incldue <comelang2.h>

int main(int argc, char** argv)
{
    list<char*>*% li = ["AAA", "BBB", "CCC", "DDD", "EEE"];
    
    foreach(it, li.sublist(0,3)) {   // "AAA"\n"BBB"\n"CCC"
        puts(it);
    }
    
    li.add("FFF").add("GGG");
    
    foreach(it, li) {   // "AAA"\n"BBB"\n"CCC"\n"DDD"\n"EEE"\n"FFF"\n"GGG"\n
        puts(it);
    }
    
    return 0;
}
```

li.each { puts(it); } can also access all list elements, but break, continue, and return cannot be used. It is more efficient to use foreach. foreach takes the first argument as the name of the variable containing the element, and the second argument as the list.

foreach is implemented as a macro.

li.each { puts(it); }としても全てのリストの要素にアクセスできますが、break, continu, returnが使えません。foreachを使った方が効率的にもいいです。foreachは第一引数が要素が入った変数の名前、第二引数がリストとなります。

foreachはマクロで実装されてます。

```C
#define foreach(o1, o2) for(var o2_saved = (o2), var o1 = (o2_saved).begin(); !(o2_saved).end(); o1 = (o2_saved).next())
```

Below is an explanation of all methods.

以下は全メソッドの解説です。

```C
list<T>*% initialize(list<T>*% self);
```

A constructor. It will be called by typing new list<int>();. Internally this is new list<int>.initialize();
It is an abbreviation of

The constructor must add a % to the first argument and add 1 to the reference count. If you do not add %, it will be determined that the heap can be freed and will be automatically freed. The return value must also be marked with a % to prevent it from being released.

Write return self; at the end of the constructor. It cannot be omitted.

コンストラクタです。new list<int>();とすれば呼び出されます。これは内部的にはnew list<int>.initialize();
の略です。

コンストラクタは第一引数に%をつけてリファレンスカウントを＋１しなければなりません。%をつけてないと解放していいヒープだと判断されて自動的にfreeされます。戻り値も%をつけて解放されないようにしないといけません。

コンストラクタの最後にはreturn self;と書いてください。略することはできません。

```C
var li = new list<int>.initialize();
li.add(1).add(2).add(3);

var li2 = new list<int>();
li2.add(1).add(2).add(3);
```

```C
list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values) 
```

Creates a list initialized with an array.

配列で初期化されたリストを作成します。

```C
int values[3] = { 1, 2, 3 };

var li = new list<int>.initialize_with_values(3, values);
```

```C
void finalize(list<T>* self) 
```

It's a destructor. Called when automatically deleted or manually deleted.

デストラクターです。自動的に消去される場合、手動でdeleteする場合に呼ばれます。

```C
list<int>* li = borrow gc_inc(new list<int>());
li.add(1).add(2).add(3);
delete li;  // finalize is called. finalizeが呼ばれる
```

gc_inc increments the heap reference count by 1. borrow removes the heap from being automatically released and allows it to be assigned to a variable without a %. In this case the heap is managed manually and memory leaks will occur if you don't delete it. If a memory leak occurs When you run the program, the number of memory leaks will be displayed. If you compile with the -cg option, the stack frame at the location of the source file where the heap was generated will be displayed. I think it's easy to debug.

gc_incはヒープのリファレンスカウントを+1します。borrowはヒープの自動解放対象から外し、%をつけない変数に代入できるようにします。この場合ヒープは手動で管理されて、deleteしないとメモリリークが発生します。 メモリリークが発生した場合プログラムを実行するとメモリリークの回数が表示されます。-cgオプションをつけてコンパイルするとヒープが生成されたソースファイルの位置のスタックフレームが表示されます。デバッグも容易だと思います。

```C
void force_finalize(list<T>* self) 
```

```C
list<int>* li = borrow gc_inc(gc_inc(new list<int>()));
li.add(1).add(2).add(3);
force_delete li;  // force_finalize is called. force_finalizeが呼ばれる
```

Frees the heap regardless of the reference count.

リファレンスカウントの数に関わらずヒープを解放します。

```C
list<T>*% clone(list<T>* self)
```

```C
var li = [1,2,3,4,5];
var li2 = clone li;   // cloneがよばれる
```

clone is a deep copy. Elements are also recursively cloned to duplicate memory. Since li and li2 have a reference count of 1, they will be automatically deleted when they exit the scope.

If you don't want to deep copy, follow the steps below.

cloneはディープコピーです。要素も再起的にcloneされて、メモリが複製されます。liとli2はリファレンスカウントが1のためスコープを抜けると自動的に消去されます。

ディープコピーしたくない場合は以下です。

```C
var li = [1,2,3,4,5];
var li2 = li;
```

li2 refers to the same thing as li. The heap of [1,2,3,4,5] has a reference count of 2, so when li and li2 exit the scope, the reference count is -2 and becomes 0, and [1,2,3,4,5 ] will be released.

li2はliと同じものを指しています。[1,2,3,4,5]のヒープはリファレンスカウントが２のためliとli2がスコープを抜けるとその時リファレンスカウントが-2されて0になり、[1,2,3,4,5]は解放されます。

```C
var li = [1,2,3,4,5];
list<int>* li2 = li;
```

In this case, li and li2 refer to the same thing, but if li2 is accessed after li is released, a segmentation fault will occur.

この場合もliとli2は同じものをさしていますが、liが解放された後にli2にアクセスするとセグメンテーションフォルトを起します。

```C
list<T>* add(list<T>* self, T item)
```

```C
var li = [s"ABC", s"DEF", s"GHQ"]:
li.add(s"OPQ");
```

s"ABC" is a string type character string and is allocated on the heap. The same is true for string("ABC"). string is defined as typedef char*% string; and can also be treated as a simple char type array. So, putting(s"ABC"); will output ABC\n. In this case, the generated string will be automatically freed.

li is list<string>*%. The reference count of s"OPQ" in li.add(s"OPQ"); is incremented by 1 and it is correctly stored in li. The stored s"ABC", s"DEF", s"GHQ", and s"OPQ" are correctly freed when li is freed.

s"ABC"はstring型の文字列でヒープに確保されます。string("ABC")としても同じです。stringはtypedef char*% string;と定義されていて、単なるchar型の配列としても扱えます。なのでputs(s"ABC");とするとABC\nが出力されます。この場合生成された文字列は自動的にfreeされます。

li is list<string>*%. The reference count of s"OPQ" in li.add(s"OPQ"); is incremented by 1 and it is correctly stored in li. The stored s"ABC", s"DEF", s"GHQ", and s"OPQ" are correctly freed when li is freed.

liはlist<string>*%です。li.add(s"OPQ");のs"OPQ"はリファレンスカウントが+1されて、正しくliに格納されます。liが解放されるとき格納された、s"ABC", s"DEF", s"GHQ", s"OPQ"は正しくfreeされます。

```C
void pop_front(list<T>* self) 
```

Delete the beginning of the list. If the heap is stored, the element will be freed. If it is a non-heap pointer such as "ABC", it will not be freed.

リストの先頭を削除します。ヒープが格納されていた場合要素がfreeされます。ヒープでなく"ABC"などヒープでないポインタの場合はfreeされません。

```C
list<T>* push_back(list<T>* self, T item)
```

Same as add.

addと同じです。

```C
string to_string(list<T>* self)
```

```C
    var li = ["ABC", "DEF", "GHQ"];
    puts(li.to_string());
```

[ABC,DEF,GHQ] will be output. to_string is executed on all elements. The type defined in comelang2 has to_string() implemented. For the original class, you must implement to_string in order to execute this method.

li is list<char*>*%, which stores string pointers. The stored element will not be freed because it is not char*%.

[ABC,DEF,GHQ]が出力されます。要素の全てにto_stringが実行されます。comelang2で定義されている型はto_string()が実装されています。オリジナルのクラスの場合、このメソッドを実行するためにはto_stringを実装する必要があります。

liはlist<char*>*%で文字列のポインタが格納されています。char*%ではないため格納された要素はfreeされません。

```C
T& begin(list<T>* self) 
T& next(list<T>* self) 
bool end(list<T>* self) 
```

Defined for foreach. Use this if you want to access all elements.

foreachのため定義されてます。すべての要素にアクセスしたい場合使います。

```C
list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*)) 
```

```C
    var li = ["ABC", "DEF", "GHI"];
    
    li.each {
        puts(it);
    }
```

ABC\nDEF\nGHI\n will be output. Method block arguments are stored in it, it2, and it3. In this case, it contains each element. Unlike foreach, break, continue, and return cannot be executed. Returning just escapes from the method block.

ABC\nDEF\nGHI\nが出力されます。メソッドブロックはit,it2,it3にメソッドブロックの引数が格納されます。この場合itは各要素が入っています。foreachと違い、break, continue, returnは実行できません。returnするとメソッドブロックから脱出するだけです。

```C
T& item(list<T>* self, int position, T default_value) 
```

```C
    var li = ["ABC", "DEF", "GHI"];
    puts(li.item(0, null)); // ABC
    puts(li.item(-1, null)); // GHI
    puts(li.item(-9999, "")); // ""
```

default_value is the value returned in case of out-of-range access. If <0, the elements counted from the back are returned.

default_valueは範囲外アクセスの場合その値が返されます。<0の場合は後方から数えた要素が返されます。

```C
int length(list<T>* self)
```

```C
    var li = [1,2,3];
    puts(li.length().to_string()); // 3
```

Returns the number of elements.

要素の数が返されます。

```C
list<T>* insert(list<T>* self, int position, T item)
```

```C
    var li = [1,2,3];
    
    li.insert(1@position, 5@item); // [1,5,2,3]
```

Add element to position. @postion is an annotation and is treated as a comment.

li should be [1,5,2,3].

要素をpositionに追加します。@postionはアノテーションでコメントとして扱われます。

liは[1,5,2,3]となるはずです。

```C
list<T>* reset(list<T>* self) 
```

```C
    var li = [1,2,3];
    
    li.reset();
    
    li.length().to_string().puts(); // 0
```

Clears the element. 0 will be output.

要素をクリアします。0が出力されます。

```C
list<T>* remove(list<T>* self, T item) 
```

```C
    var li = [1,2,3];
    
    li.remove(3); // [1,2]
    
    li.to_string().puts();
```

Delete items that match item and equals.
li is [1,2].

itemとequalsがマッチするものを削除します。
liは[1,2]です。

```C
list<T>* delete(list<T>* self, int head, int tail)
```

```C
    var li = [1,2,3,4,5];
    
    li.delete(3,-1); // [1,2,3]
    li.delete(0,1); // [2,3];
```

Delete what is in the range. -1 is the tail.
li is [1,2,3].

範囲に入っているものを削除します。-1は末尾です。
liは[1,2,3]です。

```C
list<T>* replace(list<T>* self, int position, T item)
```

```C
    var li = [1,2,3,4,5];
    
    li.replace(1, 7); // [1,7,3,4,5]
```

Replace the item.
li is [1,7,3,4,5]. If the element is a heap, the reference count of the replaced element will be -1, and if the reference count is 0, it will be deleted.

アイテムを置き換えます。
liは[1,7,3,4,5]です。要素がヒープの場合置き換える要素はリファレンスカウントが-1されて、リファレンスカウントが0なら削除されます。

```C
int find(list<T>* self, T& item, int default_value) 
```

```C
    var li = [1,2,3,4,5];
    
    li.find(3, -1@default_value); // 2
```

Returns the position from the beginning of the element matched by equals. In this case it is 2. default_value is the value if not found.

equalsがマッチする要素の先頭からの位置を返します。この場合2です。default_valueは見つからなかった場合の値です。

```C
bool equals(list<T>* left, list<T>* right)
```

```C
    [1,2,3].equals([1,2,3]).to_string().puts(); // true
```

Checks whether the object has the same argument and content. Equals is executed for each element and returns true if it is true for all elements.

オブジェクトが引数と内容が一緒か確認します。要素ごとにequalsが実行されすべての要素で真ならtrueを返します。

```C
list<T>*% sublist(list<T>* self, int begin, int tail) 
```

```C
    [1,2,3,4,5].sublist(0,2); // [1,2]
    [1,2,3,4,5].sublist(3,-1); // [4,5]
    [1,2,3,4,5].sublist(3,-2); // [4]
```


T&?? operator_load_element(list<T>* self, int position) 

```C
    var li = [1,2,3,4,5];
    
    printf("%d\n", li[3]); // 4
    printf("%d\n", li[-1]); // 5
    printf("%d\n", li[-9999]); // 0
```

If the index is not found, null check will result in a dynamic error if ?? is not added. Only if the item is a pointer.

アイテムが見つからない場合??をつけないとnull checkが動的エラーとなります。アイテムがポインタの場合だけです。

```
    var li = ["AAA","BBB","CCC"];
    var item = li[5]; // runtime error
```


```
    var li = ["AAA","BBB","CCC"];
    var item = li[5]??; // item is null
```

```C
T& operator_store_element(list<T>* self, int position, T item) 
```

```C
    var li = [1,2,3,4,5];
    
    li[0] = 123; // [123,2,3,4,5]
```

```C
list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) 
```

```C
    var li = [1,2,3,4,5];
    
    li[0..2].to_string().puts(); // [1,2]
    li[3..-1].to_string().puts(); // [4,5]
```

```C
bool operator_equals(list<T>* self, list<T>* right) 
```

```C
    [1,2,3] === [1,2,3]; // true
    [1,2,2] === [1,2,3]; // false
```

equals is called for each element.

各要素にequalsが呼ばれます。

```C
bool operator_not_equals(list<T>* left, list<T>* right) 
```

```C
    [1,2,3] !== [1,2,3]; // false
    [1,2,2] !== [1,2,3]; // true
```

```C
bool contained(list<T>* self, T item) 
```

```C
    [1,2,3].contained(3); // true
    [1,2,3].contained(4); // false
```

```C
list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) 
list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) 
list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) 
```

```C
    [3,7,2,5].sort_with_lambda(int lambda(int left, int right) {
        if(left < right) {
            return -1;
        }
        else if(left > right) {
            return 1;
        }
        else {
            return 0;
        }
        
        return 0;
    }); // [2,3,5,7]
```

Sort by lambda expression.

lambda式でソートします。

```C
list<T>*% merge_list(list<T>* left, list<T>* right) 
list<T>*% merge_sort(list<T>* self) 
list<T>*% sort(list<T>* self) 
```

```C
    [3,7,2,5].sort(); // [2,3,5,7]
```

```C
list<any>*% map(list<T>* self, void* parent, any (*block)(void*, T&))
```

```C
    ["1","2","3"].map { return atoi(it) }  // [1,2,3]
```

Executes an expression on each element and returns a list of results. However, since this map returns any, anything that uses the heap will cause a memory leak. Please use the following map2.

各要素に式を実行して、その結果のリストを返します。ただ、このmapはanyを返すのでヒープを使うものはメモリリークを起こします。次のmap2を使ってください。

```C
template<R> list<R>*% map2(list<T>* self, void* parent, R (*block)(void*, T&))
```

```C
    [1,2,3].map2<string> { return it.to_string() } // ["1", "2", "3"]
```

```C
list<T>*% reverse(list<T>* self) 
```

```C
    [1,2,3].reverse(); // [3,2,1]
```

```C
list<T>*% uniq(list<T>* self) 
```

```C
    [8,8,2,2,3,3].uniq(); // [8,2,3]
```

Delete adjacent identical elements. It may not work unless you use sort().

隣あった同じ要素を削除します。sort()しないとダメかもしれません。

```C
list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
```

```C
    [1,2,3,4,5].filter { return it > 2 };  // [3,4,5]
```

```C
list<T>*% operator_add(list<T>*% left, list<T>*% right) 
```

```C
    [1,2,3] + [4,5]; // [1,2,3,4,5]
```

```C
list<T>*% operator_mult(list<T>* left, int right) 
```

```C
    [1,2,3] * 2; // [1,2,3,1,2,3]
```

```C
string join(list<T>* self, char* sep=" ") 
```

```C
    [1,2,3].join("+");    // 1+2+3
```

# map

map is a dictionary.

mapは辞書です。

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    map<char*, int>*% ma = new map<char*, int>();
    
    ma.insert("AAA", 1);
    ma.insert("BBB", 2);
    ma.insert("CCC", 3);
    
    foreach(it, ma) {
        int item = ma[it];
        
        printf("element %s %d\n", it, item);
    }
    
    return 0;
}
```

```C
map<T,T2>*% initialize(map<T,T2>*% self)
```

```C
var ma = new map<char*,int>();
ma.insert("AAA", 1);
ma.insert("BBB", 2);
ma.insert("CCC", 3).insert("DDD", 4);
```

```C
map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values) 
```

```
    char* keys[] = { "AAA", "BBB", "CCC", "DDD" };
    int values[] = { 1, 2, 3, 4 };
    
    var ma = new map<char*,int>.initialize_with_values(4, keys, values);
```

```C
void finalize(map<T,T2>* self)
void force_finalize(map<T,T2>* self) 
```

```C
map<T, T2>*% clone(map<T, T2>* self)
```

```
    var ma = ["AAA":1, "BBB":2, "CCC":3];
    var ma2 = clone ma;
```


```C
string to_string(map<T,T2>* self)
```

```
    ["AAA":1, "BBB":2, "CCC":3].to_string().puts();   // [AAA:1,BBB:2,CCC:3]
```

All elements and keys must implement to_string(). All basic types of comelang2 have to_string() implemented.

すべての要素とキーにto_string()が実装されている必要があります。comelang2の基本的な型はすべてto_string()が実装されてます。

```C
T2& at(map<T, T2>* self, T& key, T2 default_value) 
```

```
    ["AAA":1, "BBB":2, "CCC":3].at("AAA", -1).to_string().puts();  // 1
```

Takes value by key. This is the value if default_value is not found.

キーで値をとります。default_valueが見つからない場合の値です。

```C
map<T,T2>* remove(map<T, T2>* self, T& key) 
```

```
    var ma = ["AAA":1, "BBB":2, "CCC":3].remove("AAA");
    ma.to_string().puts();   // [BBB:2, CCC:3]
```

Delete value by key.

キーで値を削除します。

```C
T& begin(map<T, T2>* self)
T& next(map<T, T2>* self) 
bool end(map<T, T2>* self) 
```

It is for foreach. To access all keys:

foreachのためにあります。すべてのキーにアクセスするには以下のようにします。

```
    var ma = ["AAA":1, "BBB":2, "CCC"];
    
    foreach(key, ma) {
        var item = ma[key];
        
        printf("%s %d\n", key, item);
    }
```

The output is AAA 1\nBBB 2\n CCC 3\n.
foreach(key, ["AAA":1, "BBB":2, "CCC":3]) is not possible. Because foreach is a macro, it has meaning.
Maybe include foreach in the language specification instead of a macro.

出力はAAA 1\nBBB 2\n CCC 3\nです。
foreach(key, ["AAA":1, "BBB":2, "CCC":3])とはできません。foreachはマクロのため,が意味を持つためです。
ちょっとforeachをマクロでなく言語仕様に含めるかもしれません。

```C
void rehash(map<T,T2>* self) 
```

For internal use.

内部的に使用します。

```C
map<T,T2>* insert(map<T,T2>* self, T key, T2 item)
```

```
    var ma = ["AAA":1].insert("BBB",2).insert("CCC",3);
    ma.to_string().puts(); // [AAA:1,BBB:2,CCC:3]
```

```C
map<T,T2>* insert2(map<T,T2>* self, T key, T2 item) 
```

Same as insert. I think it was used with clone. This is because if you only insert it, it will cause an infinite loop.

insertと同じです。cloneで使用していたと思います。insertだけだと無限ループするためでした。

```C
T2&?? operator_load_element(map<T, T2>* self, T& key) 
```

```
    var ma = ["AAA":1,"BBB":2,"CCC":3];
    var item = ma["AAA"];
    item.to_string().puts(); // 1
```

If the key is not found, null check will result in a dynamic error if ?? is not added. Only if the item is a pointer.

キーが見つからない場合??をつけないとnull checkが動的エラーとなります。アイテムがポインタの場合だけです。

```
    var ma = [1:"AAA",2:"BBB",3:"CCC"];
    var item = ma[4]; // runtime error
```


```
    var ma = [1:"AAA",2:"BBB",3:"CCC"];
    var item = ma[4]??; // item is null
```

```C
T2 operator_store_element(map<T, T2>* self, T key, T2 item) 
```

```
    var ma = ["AAA":1, "BBB":2];
    ma["CCC"] = 3;
    ma.to_string().puts(); // [AAA:1,BBB:2,CCC:3]
```

```C
bool equals(map<T, T2>* left, map<T, T2>* right)
```

```
    ["AAA":1,"BBB":2,"CCC":3].equals(["AAA":1,"BBB":2,"CCC":3]); // true
    ["AAA":1].equals(["BBB":2]); // false
```

```C
bool operator_equals(map<T, T2>* left, map<T,T2>* right) 
```

```
    ["AAA":1,"BBB":2,"CCC":3] === ["AAA":1,"BBB":2,"CCC":3]; // true
    ["AAA":1] === ["BBB":2]; // false
```

```C
bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) 
```

```
    ["AAA":1,"BBB":2,"CCC":3] !== ["AAA":1,"BBB":2,"CCC":3]; // false
    ["AAA":1] !== ["BBB":2]; // true
```

```C
bool find(map<T, T2>* self, T& key) 
```

```
    ["AAA":1, "BBB":2].find("AAA"); // true;
    ["AAA":1, "BBB":2].find("CCC"); // false;
```

Returns true if the key is included.

キーが含まれればtrueを返します。


```C
map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) 
```

```
    (["AAA":1] + ["BBB":2]).to_string().puts(); // [AAA:1,BBB:2]
```

```C
map<T,T2>*% operator_mult(map<T,T2>* left, int right) 
```

```
    (["AAA":1] * 2).to_string().puts(); // [AAA:1,AAA:1]
```

```C
list<T>*% keys(map<T, T2>* self)
```

```
    ["AAA":1, "BBB":2, "CCC":3].keys().to_string().puts();  // [AAA,BBB,CCC]
```

```C
list<T2>*% values(map<T, T2>* self) 
```

```
    ["AAA":1, "BBB":2, "CCC":3].values().to_string().puts();  // [1,2,3]
```

# tuple

A tuple is a collection of elements of different types. It may be called a simple structure.

タプルは型の違う要素を持つコレクションです。簡易的な構造体と呼べるかもしれません。

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    tuple3<int, int, char*>*% tu = new tuple3<int, int, char*>(1, 2, "ABC");
    
    printf("%d %d %s\n", tu.v1, tu.v2, tu.v3);
    
    return 0;
}
```

Up to 5 tuples are defined.

tupleは5つまで定義されてます。

```
    tuple5<int,int,int,string,char*>*% tu = (1,2,3,s"ABC","DEF");
    
    tu.to_string().puts(); // (1,2,3,ABC,DEF)
```

I think tuple has catch and can be used for simple exception handling.

tupleにはcatchがあり簡易的な例外処理として使えると思います。

```
int, bool div(int a, int b)
{
    if(b == 0) {
        return (0, false);
    }
    
    return (a/b, true);
}

int main(int argc, char* argv)
{
    int value = div(1,0).catch {
        puts("0 divition");   // // Enter here because we are dividing by 0. 0で割っているため、ここに入る
        exit(1);
    }
    
    printf("value %d\n", value);
    
    return 0;
}
```

int, bool have the same meaning as tuple2<int, bool>*%. Used to return multiple values. When you want to store multiple values in each variable, you can use var a,b = div(1,1); Int is placed in a and bool is placed in b.

To access the element, use v1 etc.

int, boolはtuple2<int, bool>*%と同じ意味です。複数の値を返すために使います。複数の値を各変数に格納したい時、個の場合はvar a,b = div(1,1);とすればいいです。aにint, bにboolが入ります。

要素にアクセスするにはv1などとします。

```
    var tu = (1,2,"ABC");
    
    tu.v1 === 1; // true
    tu.v2 === 2; // true
    tu.v3 === "ABC"; // true
```

# buffer

Buffer is memory that can be appended.

bufferは追記できるメモリーです。

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    buffer*% buf = new buffer();
    
    buf.append_str("ABC");
    buf.append_str("DEF");
    
    puts(buf.to_string()));
    
    buffer*% buf2 = new buffer();
    
    buf2.append_int(1);
    buf2.append_int(2);
    buf2.append_int(3);
    
    var p = buf2.to_int_pointer();
    
    printf("%d\n", *p);  // 1
    p++;
    printf("%d\n", *p);  // 2
    p++;
    printf("%d\n", *p);  // 3
    p++;
    
    return 0;
}
```

```C
buffer*% buffer*::initialize(buffer*% self);
```

```
    var buf = new buffer();
```

```C
void buffer*::finalize(buffer* self);
void buffer*::force_finalize(buffer* self);

buffer*% buffer*::clone(buffer* self);
```

```
    var buf = new buffer();
    buf.append_int(1);
    buf.append_int(2);
    buf.append_int(3);
    
    var buf2 = clone buf;
```

```C
int buffer*::length(buffer* self);
```

```
    var buf = new buffer();
    buf.append_char('a');
    buf.append_char('b');
    buf.append_char('c');
    
    buf.length().to_string().puts(); // 3
```

Returns the number of bytes of memory.

メモリーのバイト数を返します。

```C
void buffer*::reset(buffer* self);
```

```
    var buf = new buffer();
    
    buf.append_char('a');
    buf.append_char('b');
    buf.append_char('c');
    
    buf.reset();
    
    buf.length().to_string().puts(); // 0
```

Clear memory.

メモリーをクリアします。

```C
void buffer*::trim(buffer* self, int len);
```

Delete trailing memory by len.

lenだけ末尾のメモリを削除します。

```
    var buf = new buffer();
    
    buf.append_str("ABCDEFG");
    buf.trim(3);
    buf.to_string().puts(); // ABCD
```

```C
buffer* buffer*::append(buffer* self, char* mem, size_t size);
```

Add memory by mem size.

memのsizeだけメモリを追加します。

```
    var buf = new buffer();
    buf.append("ABCDEFG", 2);
    
    buf.to_string().puts(); // AB
```

```C
buffer* buffer*::append_char(buffer* self, char c);
buffer* buffer*::append_str(buffer* self, char* str);
buffer* buffer*::append_nullterminated_str(buffer* self, char* str);
buffer* buffer*::append_int(buffer* self, int value);
buffer* buffer*::append_long(buffer* self, long value);
buffer* buffer*::append_short(buffer* self, short value);
```

Add memory.

メモリーを追加します。

```C
buffer* buffer*::alignment(buffer* self);
```

Align memory.

メモリーのアライメントを取ります。

```C
int buffer*::compare(buffer* left, buffer* right);
```

Compare the buffer sizes. <0 means smaller on the left, >0 means smaller on the right. == 0 and have the same size.
Used in sort.

bufferの大きさを比べます。<0で左が小さい、>0で右が小さい。== 0で同じ大きさです。
sortで使います。

```C
buffer*% string::to_buffer(char* self);
buffer*% char*::to_buffer(char* self);
```

Convert string to buffer.

文字列をbufferに変換します。

```
    var buf = "ABCDEFG".to_buffer();
    buf.append_str("HIJ");
    
    buf.to_string().puts(); // ABCDEFGHIJ
```

```C
string buffer*::to_string(buffer* self);
```

Convert buffer to string.

bufferを文字列に変換します。

```C
static inline buffer*% char[]::to_buffer(char* self, size_t len) ;
static inline buffer*% short[]::to_buffer(short* self, size_t len) ;
static inline buffer*% int[]::to_buffer(int* self, size_t len) ;
static inline buffer*% long[]::to_buffer(long* self, size_t len) ;
static inline buffer*% float[]::to_buffer(float* self, size_t len) ;
static inline buffer*% double[]::to_buffer(double* self, size_t len) ;
```

```C
    char a[4] = { 'A', 'B', 'C', '\0' };
    
    var buf = a.to_buffer();
    
    puts(buf.to_string()); // ABC
```

# smart_pointer

A memory-safe pointer. Out-of-bounds accesses will not cause a segmentation fault and will display a stack trace. If you want to display the stack trace, you need to compile with the -cg option. If there is no -cg option, the source file name and line number will be displayed and the program will crash.

メモリセーフなポインタです。範囲外アクセスはsegmentaition faultをおこさずスタックトレースを表示します。スタックトレースを表示したい場合-cgオプションでのコンパイルが必要です。-cgオプションがない場合はソースファイル名と行番号を表示して落ちます。


```C
struct smart_pointer<T> {
    buffer*% memory;
    T* p;
};
```

```C
static inline smart_pointer<char>*% buffer*::to_pointer(buffer* self)
```

```
    var p = "ABCDEFG".to_buffer().to_pointer();
    
    printf("%c\n", *p);   // A
    p++;
    printf("%c\n", *p);   // B
    p+=2;
    printf("%c\n", *p);   // B
    
    p+=999;               // -cgオプションでコンパイルしていた場合スタックフレームを表示して落ちる。-cgオプションがない場合はソースファイル名と行番号を出力して落ちる
                          // When compiling with the -cg option, the stack frame is displayed and crashes. If there is no -cg option, output the source file name and line number and crash.
```

```C
static inline smart_pointer<bool>*% buffer*::to_pointer(buffer* self)
static inline smart_pointer<char>*% buffer*::to_char_pointer(buffer* self)
static inline smart_pointer<short>*% buffer*::to_short_pointer(buffer* self)
static inline smart_pointer<int>*% buffer*::to_int_pointer(buffer* self)
static inline smart_pointer<long>*% buffer*::to_long_pointer(buffer* self)
```

Create a pointer for each type name.

各型名のポインタを作成します。

```
    var buf = new buffer();
    
    buf.append_int(1);
    buf.append_int(2);
    buf.append_int(3);
    
    var p = buf.to_int_pointer();
    
    printf("%d\n", *p); // 1
    p++;
    printf("%d\n", *p); // 2
    p++;
    printf("%d\n", *p); // 3
    p++; // 範囲外。落ちるがセグメンテーションフォルトは起こさない。ソースの位置を表示する
         // Out of range. It crashes but does not cause a segmentation fault. Show source location
```

```C
smart_pointer<T>*% initialize(smart_pointer<T>*% self, void* memory, int size)
smart_pointer<T>*% operator_add(smart_pointer<T>* self, int value)
smart_pointer<T>*% operator_sub(smart_pointer<T>* self, int value)
T operator_derefference(smart_pointer<T>* self)
smart_pointer<T>* operator_plus_plus(smart_pointer<T>* self)
smart_pointer<T>* operator_minus_minus(smart_pointer<T>* self)
smart_pointer<T>* operator_plus_equal(smart_pointer<T>* self, int value)
smart_pointer<T>* operator_minus_equal(smart_pointer<T>* self, int value)
```

```
static inline smart_pointer<char>*% char[]::to_pointer(char* self, size_t len);
static inline smart_pointer<short>*% short[]::to_pointer(short* self, size_t len);
static inline smart_pointer<int>*% int[]::to_pointer(int* self, size_t len);
static inline smart_pointer<long>*% long[]::to_pointer(long* self, size_t len);
static inline smart_pointer<float>*% float[]::to_pointer(float* self, size_t len);
static inline smart_pointer<double>*% double[]::to_pointer(double* self, size_t len);
```

```C
   int a[3] = { 1, 2, 3 };
   
   var p = a.to_pointer();
   
   printf("%d\n", *p);  // 1
   p++;
   printf("%d\n", *p);  // 2
   
   p += 6;              // don't segmentaion fault. print out err
```

```C
bool as_bool(smart_pointer<T>* self)
```

Extracts memory as bool.

メモリーをboolとして取り出します。

```C
char as_char(smart_pointer<T>* self)
```

Extracts memory as char.

メモリーをcharとして取り出します。

```
    var p = "ABCDEFG".to_buffer().to_pointer();
    
    p.as_char(); // A
```

```C
short as_short(smart_pointer<T>* self)
```

```
    var p = "ABCDEFG".to_buffer().to_pointer();
    
    p.as_shart(); // バイト列ABをshortとして表した値
                  // Value representing byte string AB as short
```

```C
int as_int(smart_pointer<T>* self)
long as_long(smart_pointer<T>* self)
float as_float(smart_pointer<T>* self)
double as_double(smart_pointer<T>* self)
string to_string(smart_pointer<T>* self)
```

# string 

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    puts(xsprintf("%d", 1 + 1));     // ==> 2
    puts(string("ABC").substring(0, 1));  // ==> "A"
    
    return 0;
}
```

```C
int string::length(char* str);
```

```
    s"ABC".length(); // 3
```

```C
int char*::length(char* str);
```

```
    "ABC".length(); // 3
```

```C
string char*::substring(char* str, int head, int tail);
string string::substring(char* str, int head, int tail);
```

```
    "ABC".substring(0,2); // AB
```

```C
string string::operator_load_range_element(char* str, int head, int tail);
string char*::operator_load_range_element(char* str, int head, int tail);
```

```
    "ABC"[0..2]; // AB
```

```C
string char*::reverse(char* str) ;
string string::reverse(char* str) ;
```

```
    "ABC".reverse();   // CBA
```

```C
string xsprintf(char* msg, ...);
```

```
    var str = xsprintf("%d+%d+%d", 1,2,3); // 1+2+3
```

```C
static inline string string::xsprintf(char* self, char* msg, ...)
static inline string char*::xsprintf(char* self, char* msg, ...)
```

```
    s"ABC".xsprintf("[%s]").puts(); // [ABC]
```

```C
static inline string int::xsprintf(int self, char* msg, ...)
```

```
    [1,2,3,4,5].item(0, -1).xsprintf("[%d]\n").puts();  // [1]
```

```C
string char*::delete(char* str, int head, int tail) ;
string string::delete(char* str, int head, int tail);
```

```
    var str = s"ABCDEFG".delete(0,1); // CDEFG
```
```C
list<string>*% string::split_char(char* self, char c) ;
list<string>*% char*::split_char(char* self, char c);
```

```C
    s"A,B,C".split_char(','); // [A,B,C]
```

path related wrapper

pathの関連のラッパー

```C
string xrealpath(char* path);
```

string version of realpath(3)

realpath(3)のstring版

```C
xrealpath("/aaa/../bbb"); // /bbb
```

Maybe.

多分。

```C
string xbasename(char* path);
```

string version of basename(3)

basename(3)のstring版

```C
string xextname(char* path);
```

return extension

拡張子を返す

```C
string xdirname(char* path);
```

return directory

ディレクトリを返す

```C
string xnoextname(char* path);
```

Returns the file name without the extension.

拡張子をとったファイル名を返す。

```C
int FILE*::write(FILE* f, char* str);
```

```
    FILE* f = fopen("AAA", "a");
    
    f.write("ABC");
    
    f.fclose();
```

I just made it object oriented.

オブジェクト指向っぽくしただけ。

```C
string FILE*::read(FILE* f);
```

similar

同様

```C
int FILE*::fclose(FILE* f) ;
```

similar

同様。

```C
int* FILE*::fprintf(FILE* f, const char* msg, ...);
```

```
    FILE* f = fopen("AAA", "a"9;
    
    f.fprintf("%d\n", 1+1);
    
    f.close();
```

similar
同様

```C
list<string>*% FILE*::readlines(FILE* f);
```

```
    "AAA\nBBB\nCCC\n".write("FILE", append:true);
    
    FILE* f = fopen("FILE", "r");
    
    var li = f.readlines();
    
    li[0].puts(); // AAA
    li[1].puts(); // BBB
    li[2].puts(); // CCC
```

```C
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f));
```


I forgot. do not use. Just fclose automatically after the block is released.


忘れた。使わない。ブロックが出た後自動的にfcloseするだけ。

```C
int string::write(char* self, char* file_name, bool append=false);
int char*::write(char* self, char* file_name, bool append=false) ;

string char*::read(char* file_name) ;
string string::read(char* file_name) ;
```

```C
    "ABC".write("FILE-NAME", append:true);
    "ABC".write("FILE-NAME", append:true);
    "ABC".write("FILE-NAME", append:true);
    
    "FILE-NAME".read().puts(); // ABC\nABC\nABC
```

If append:false, no appending will be done. append:false is the parameter label. Easy to view source files.
It is also good to use true@append and annotations.

append:falseだと追記なし。append:falseはパラメーターラベル。ソースファイルが見やすい。
true@appendとアノテーションを使うのもいい。

```C
void int::times(int self, void* parent, void (*block)(void* parent, int it));
```

```
    3.times { puts("HO!"); } // HO!HO!HO!
```

I just want to write shocking code in Ruby.

Rubyで衝撃を受けたコードを書きたいだけ。

# integer

```C
struct integer
{
    long value;
};

integer*% integer*::initialize(integer*% self, long value);
integer*% char::to_integer(char self);
integer*% short::to_integer(short self);
integer*% int::to_integer(int self);
integer*% long::to_integer(long self);
int integer*::to_int(integer* self);
bool integer::equals(integer* self, integer* right);
int integer::compare(integer* self, integer* right);
bool integer::operator_equals(integer* self, integer* right);
bool integer::operator_not_equals(integer* self, integer* right);
integer*% integer::operator_add(integer* left, integer* right);
integer*% integer::operator_sub(integer* left, integer* right);
integer*% integer::operator_mult(integer* left, integer* right);
integer*% integer::operator_div(integer* left, integer* right);
integer*% integer::operator_mod(integer* left, integer* right);
integer*% integer::operator_lshift(integer* left, integer* right);
integer*% integer::operator_rshift(integer* left, integer* right);
integer*% integer::operator_gteq(integer* left, integer* right);
integer*% integer::operator_lteq(integer* left, integer* right);
integer*% integer::operator_lt(integer* left, integer* right);
integer*% integer::operator_gt(integer* left, integer* right);
integer*% integer::operator_and(integer* left, integer* right);
integer*% integer::operator_xor(integer* left, integer* right);
integer*% integer::operator_or(integer* left, integer* right);
integer*% integer::operator_andand(integer* left, integer* right);
integer*% integer::operator_oror(integer* left, integer* right);
```

Well, the heap version of the numeric type. I'm sure you could have written it like this.

まあ、数値型のヒープ版。確か、こう書けたはず。

```
    integer*% a = 1;
    integer*% b = 2;
    
    int c = a + b;   // 3
```

a,b are values taken on the heap

a,bはヒープ上に取られた値

# Default parameters, parameter labels

``` C
#include<stdio.h>

int fun(int x = 123, int y = 345, int z = 456) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

struct sData 
{
    int x;
    int y;
    int z;
};

int sData*::fun(sData* self, int x = 123, int y = 345, int z = 456)
{
    self.x = x;
    self.y = y;
    self.z = z;
}

void sData*::show(sData* self)
{
    printf("x %d y %d z %d\n", self.x, self.y, self.z);
}

int main(int argc, char** argv) 
{
    fun();           // x 123 y 345 z 456 are outputed
    fun(y:2);        // x 123 y 2 z 456
    
    fun(y:1, x:3);   // x 3 y 1 z 456
    
    fun(1);          // x 1 y 345 z 456
    fun(1,2);        // x 1 y 2 z 456
    
    sData data;
    (&data).fun(1,2,3);
    (&data).show();   // x 123 y 345 z 456
    
    (&data).fun(y:2); // x 123 y 2 z 456
    (&data).show();   // x 123 y 2 z 456
    
    (&data).fun(1);
    (&data).show();   // x 1 y 345 z 456
    
    return 0;
}
```

# Reference count GC

Basically, when you assign to a variable with % appended to the type name, the reference count of the heap is increased by 1. When the variable marked with % disappears, the reference count is decremented by 1.


基本的に型名に%つけた変数に代入するとヒープはリファレンスカウントが+1されます。%をつけた変数が消える時リファレンスカウントが-1されます。

```
int main(int argc, char** argv)
{
    int*% a = new int;
    *a = 123;

    
    return 0;
}
```

```
int main(int argc, char** argv)
{
    int* a = new int;
    *a = 123;

    
    return 0;
}
```

The above will result in a compilation error.

上記はコンパイルエラーとなります。

```
int main(int argc, char** argv)
{
    int* a = borrow gc_inc(new int);
    *a = 123;

    
    return 0;
}
```

There will be no compilation error. This is a memory leak.

コンパイルエラーとなりません。これはメモリリークとなります。

```
> comelang2 -g a.c
> valgrind ./a
```

```
> comelang2 -gdwarf-4 a.c
> valgrind ./a
```

Adding the -g option allows you to track memory leaks with valgrind. Depending on your environment, you may need to set it to -gdwarf-4.

-gオプションをつけるとvalgrindでのメモリリークの追跡が可能になります。環境によっては-gdwarf-4としないといけないかもしれません。

```
> comelang2 -g a.c
> valgrind --leak-check=full ./a
```

```
> comelang2 -gdwarf-4 a.c
> valgrind --leak-check=full ./a
```

postscript. Comelang2 alone can also track memory leaks.

追記。comelang2単体でもメモリリークの追跡ができます。

```
> comelang2 a.c
> ./a
1 memory leaks
```

You can see that there is a memory leak as is. The detection cost is O(1) and is almost non-existent. It's fast.

そのままでメモリリークが存在することがわかります。検出コストはO(1)でほとんどかかってません。高速です。

```
> comelang2 -cg a.c
> ./a
```
Display memory leak location, type name, and stack frame (function history)

If a field in a structure has a % symbol, assigning to that field will increase the reference count by 1.

メモリリークがある場所と型名、スタックフレーム（関数履歴）を表示する

構造体のフィールドに%がついている場合そのフィールドに代入するとリファレンスカウントが+1されます。

```
struct sData
{
    string a;
};

int main(int argc, char** argv)
{
    sData data;
    
    data.a = string("ABC");
    
    puts(data.a);
    
    return 0;
}
```
string is defined as typedef char*% string; string("ABC") allocates ABC\0 on the heap and returns a pointer.
When assigned to data.a, the heap's reference count is increased by 1.
When data disappears, the finalizer for sData is automatically defined and data.a is also freed.

The same principle applies when passing a heap to a function. When assigned to an argument, the reference count is incremented by 1, and when the function returns, the reference count is incremented by -1.

stringはtypedef char*% string;と定義されています。string("ABC")はABC\0をヒープで確保してポインタを返します。
data.aに代入される時、そのヒープはリファレンスカウントが+1されます。
dataが消える時、sDataのファイナライザーが自動的に定義されてdata.aも解放されます。

関数にヒープを渡す時も原則通りです。引数に代入される時リファレンスカウントが+1されて関数から戻る時リファレンスカウントが-1されます。

```
void fun(string a)
{
    puts(a);
}

int main(int argc, char** argv)
{
    string str = string("ABC");
    
    fun(str);
    
    return 0;
}
```

If the return value of a function is a heap, if the return value is not assigned to a variable with a %, the reference count will be 0 and the heap will be freed as an rvalue.

関数の戻り値がヒープの場合戻り値が%をつけた変数に代入されないとリファレンスカウントが0のため右辺値としてヒープがフリーされます。

```
int*% fun(int a)
{
    int*% result = new int;
    *result = a;
    
    return result;
}

int main(int argc, char** argv)
{
    int*% n = fun(123);

    return 0;
}
```

If you want to force the reference count to +1, use gc_inc(). If you want to force -1, use gc_dec().

リファレンスカウントを強制的に+1したい場合はgc_inc()とします。強制的に-1したい場合はgc_dec()とします。

```
int main(int argc, char** argv)
{
    int* a = borrow gc_inc(new int);
    
    *a = 123;
    
    return 0;
}
```

This leaks memory. This is because a does not have a % in its type name, so the reference count will not be decremented by 1 when a disappears.

これはメモリリークします。aは型名に%がついていないためaが消える時にリファレンスカウントが-1されないためです。

```
int main(int argc, char** argv)
{
   int* a = borrow gc_inc(new int);
   
   *a = 123;
   
   delete a;
   
   return 0;
}
```

To force the addition of %, use dumbm_heap.

強制的に%をつけるにはdumm_heapとします。

```
int main(int argc, char** argv)
{
    int* a = borrow gc_inc(new int);
    int*% b = dummy_heap a;
    
    return 0;
}
```

In this case, the new int heap will be freed when b disappears.

If you want to free objects on the heap, please clone them.

この場合bが消える時にnew intのヒープは解放されます。

ヒープのオブジェクトをフリーしたい場合cloneしてください。

```
struct sData
{
   string str;
};

int main(int argc, char** argv)
{
    sData*% data = new sData;
    data.str = string("ABC");
    
    sData*% data2 = clone data;
    
    puts(data2.str);      // ==> ABC
    
    return 0;
}
```

This is 0 memory leaks.

これはメモリリーク0です。

```
 int main(int argc, char** argv)
 {
     if(isheap(string)) {
         puts("string is heap type");
      }
      
      return 0;
}
```
You can see that % is added to the type name when compiling with isheap(type name). Generics would be useful.

isheap(型名）でコンパイル時に型名に%がつけてあるかわかります。ジェネリクスで便利でしょう。

```
int fun(char* str)
{
    puts(str);
}

int main(int argc, char** argv)
{
    string str = string("ABC");
    
    fun(str);
    
    return 0;
}
```
In this case, str exists when fun is executed, so no segmentation fault occurs. If you are nervous, you can call it as fun(char*% str) and as fun(clone str).

この場合はstrはfunの実行時は存在しているためセグメンテーションフォルトしません。もし、神経質になる場合はfun(char*% str)としてfun(clone str)として呼び出せばいいでしょう。

# operator overloads

``` C
string char*::operator_mult(char* str, int n);
string string::operator_mult(char* str, int n);
bool char*::operator_equals(char* left, char* right);
bool string::operator_equals(char* left, char* right);

    "ABC" * 3  // => "ABCABCABC"
    [1,2] * 3  // => [1,2,1,2,1,2]
    "ABC" === "ABC" // => true
    "ABC !== "DEF" // => true
    [1,2] + [3] // => [1,2,3]
    
    auto ma1 = ["AAA":1, "BBB":2]
    
    xassert("map test", ma1["AAA"] == 1)
    ma1["CCC"] = 3
```

``` C
+ operator_add
- operator_sub
* operator_mult
/ operator_div
% operator_mod
=== operator_equals
!== operator_not_equals
> operator_gt
>= operator_gteq
< operator_le
<= operator_leeq
[x] = y operator_store_element
[x]  operator_load_element
! operator_logical_denial
<< operator_left_shift
>> operator_right_shift
& operator_and
^ operator_xor
| operator_or
~ operator_commplement
```

# mixin-layers system

``` C
#include <stdio.h>

int fun(char* str) version 1
{
    puts(str);
    return 1;
}

int fun(char* str) version 2
{
    int n = inherit(str);

    return n + 1;
}

int fun(char* str) version 3
{
    int n = inherit(str);

    return n + 1;
}

int main()
{
    if(fun("HELLO MIXIN-LAYERS") == 3) {
        puts("OK");
    }

    return 0;
}
```

# Annotation

``` C
int fun(bool flag) 
{
    if(flag) {
        puts("TRUE");
    }
    else {
        puts("FALSE");
    }
}

int main()
{
    fun(false@flag);

    return 0;
}
```

@[a-zA-Z][a-zA-Z_0-9]* is a comment of expression.

# multiple assign

``` C
#include <comelang2.h>

int, string fun(int n, string m) 
{
    return (n, m);
}

int main(int argc, char** argv)
{
    var n, m = fun(1, string("AAA"));
    
    printf("n %d m %s\n", n, m);
    
    return 0;
}
```

# Protocol, interface

``` C
#include <comelang.h>

interface sBase
{
    void show();
};

struct sChildA
{
    int x;
    int y;
    int z;
    string str;
}

sChildA*% sChildA*::initialiize(sChildA*% self)
{
    self.x = 1;
    self.y = 2;
    self.z = 3;
    self.str = string("ABC");
    
    return self;
}

void sChildA*::show(sChildA* self)
{
    printf("x %d y %d z %d str %s\n", self.x, self.y, self.z, self.str);
}

struct sChildB
{
    int X;
    int Y;
    int Z;
};

sChildB*% sChildB*::initialize(sChildB*% self)
{
    self.X = 111;
    self.Y = 222;
    self.Z = 333;
    
    return self;
}

void sChildB*::show(sChildB* self)
{
    printf("X %d Y %d Z %d\n", self.X, self.Y, self.Z);
}

int main(int argc, char** argv)
{
    list<sBase*%>*% li = new list<sBase*%>();
    
    li.add(new sChildA() implements sBase);
    li.add(new sChildB() implements sBase);
    
    foreach(it, v) {
        it.show();
    }
    
    return 0;
}

```

# Null checking

``` C
> vin a.c
#include <stdio.h>

int main(int argc, char** argv)
{
    int* b = null;
    
    printf("null check %p\n", b!);
    
    return 0;
}
> comleang2 a.c
> ./a
b.c 7: null check
```

``` C
> vin a.c
#include <stdio.h>

void fun(int* b)
{
}

int main(int argc, char** argv)
{
    int*? b = nil;
    
    fun(b);
    
    return 0;
}
> comleang2 a.c
> ./a
a.c 11: null check
```

``` C
> vin a.c
#include <stdio.h>

void fun(int*? b)
{
}

int main(int argc, char** argv)
{
    int*? b = nil;
    
    fun(b);
    
    return 0;
}
> comleang2 a.c
> ./a
(no called checking null)
```

``` C
> vin a.c
#include <stdio.h>

int main(int argc, char** argv)
{
    puts(nil);
    
    return 0;
}
> comleang2 a.c
> ./a
a.c 5: null check
```

nil can be assigned to a variable marked with ?. When assigned to a variable without ?, it is dynamically checked to see if it is null. (Does not cause segmentation fault)
Cast if you don't want to cause a check.

nilは?をつけた変数に代入できます。?がついていない変数に代入される時nullかどうか動的にチェックされます。(セグメンテーションフォルトを起こさない）
チェックを起こしたくない場合はキャストしてください。

```
    char*? a = nil;
    
    puts(a);        /// -cg displays stack frames. If -cg is not specified, display the source file name and line number.-cgをつけているとスタックフレームを表示する。-cgをつけてない場合はソースファイル名と行番号を表示する
    
    puts((char*)a);  // segmentation fault. セグメンテーションフォルト
```

Null can be assigned to any variable. If you want to check whether it is null or not, please add !.

nullはすべての変数に代入できます。nullかどうかをチェックしたい場合は!をつけてください。

# Null guard

```
char*?? fun()
{
    return null;
}

int main()
{
    char* m = fun();
    return 0;
}
```

Null checker ocurrs runtime error

```
char*?? fun()
{
    return null;
}

int main()
{
    char* m = fun()??;
    return 0;
}
```

m is null


# Using C

``` C
    int main(int argc, char** argv)
    {
        using c { int a = (1,2); }     // no error. It's comman operator and brace
        
        int a = (1,2);  // error. It's tuple
        
        return 0;
    }
```

``` C
> vin a.h
static inline int fun()
{
    return (1,2);
}
> vin a.c
using C
{
#include "a.h"
}

int main(int argc, char** argv)
{
    return fun();   // no error. It's comma operator and brace
}
```

# Emmbeded expression string

```
int main(int argc, char* argv)
{
    string a = s"abc";
    
    puts(a);          // abc
    
    string b = S"def";
    
    puts(b);          // def
    
    int c = 123;
    
    puts(s"c == \{c}");   // c == 123;
    puts(s"c == $c");     // c == 123;
    
    puts(s"1 + 1 == \{1+1}");   // 1+1 == 2;
    
    return 0;
}
```

# BoehmGC

If you use the -gc option, all memory management will be done by boehmGC. %,dummy_heap, borrow etc. are ignored. This may free you from troublesome memory management.

-gcオプションを使うとすべてのメモリ管理がboehmGCによって行われます。%,dummy_heap, borrowなどは無視されます。こっちの方が煩わしいメモリ管理から解放されるかもしれません。

# System call errro handling like perl

```
#include <comelang2.h>
using c
{
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
}

int main(int argc, char** argv)
{
    int fd2 = open("SEX", 0) or die("NO SEX"); // system call error handling
    int fd2 = open("LIVE", 0) or {
        perror("NO LIVE");
        return 1;
    }
    
    puts("You got a your child");
    
    return 0;
}

```

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    FILE* f2 = fopen("SEX", 0) and die("NO SEX"); // returned null function errror handling
    
    return 0;
}
```

# Here document

```C
#include <comelang2.h>

int main(int argc, char** argv)
{
    int a = 123;
    printf("""
AAA
\{a}
BBB
CCC
    """);
    
    return 0;
}
```

# method block

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    3.times {
        printf("%d\n", it);
    }
    
    return 0;
}
```

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    ["1", "2", "3"].map { return atoi(it); }.filter { return it > 1}.each { printf("%d\n",it); }
    
    return 0;
}
```

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    3.times {
        printf("%d\n", it);
        return! 1;     /// parent function is returned
    }
    
    return 0;
}
```

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    while(true) {
        3.times {
            printf("%d\n", it);
            break! 1;     /// parent loop is breaked
        }
    }
    
    return 0;
}
```

# Package manager

```
> comelang2 new xyz
> cd xyz
> cat <EOS > a.c
int main(int argc, char** argv)
{
    return fun(0, 0);
}
EOS
>cat <EOS > b.c
int fun(int a, int b)
{
    return a + b;
}
EOS
> comelang2 run
(make header file named common.h)
(compile with -O2 option)
(run)
> comelang2 debug
(make header file named common.h)
(compile with -g and -cg option)
(run)
> comelang2 clean
(clean up tmp files)
> comelang2 install (target-directory:default is /usr/local)
(install command file to target-directory)
```

auto included common.h

# String libraries

sample

``` C
#include <comelang2.h>
#include <comelang2-str.h>

int main()
{
    xassert("char_match test", "ABC".match(/A/));
    xassert("char_index test", "ABC".index("B", -1) == 1);
    xassert("char_rindex test", "ABCABC".rindex("B", -1) == 4);
    xassert("char_index_regex", "ABC".index_regex(/B/, -1) == 1);
    xassert("char_rindex_regex", "ABCABC".rindex_regex(/B/, -1) == 4);

    string str = string("ABC");

    str.replace(1, 'C');

    xassert("char_replace", str === "ACC"))
    xassert("char_multiply", "ABC".multiply(2) === "ABCABC");

    xassert("char_sub", "ABC".sub(/B/, "C" === "ACC");

    xassert("char_sub_count", "ABCABCABC".sub_count(/B/g, "C", 2) === "ACCACCABC");

    auto li = "ABC".scan(/./);

    xassert("char_scan", li[0] === "A" && li[1] === "B" && li[2] === "C");

    auto li2 = "A,B,C".split(/,/);

    xassert("char_split", li2[0] === "A" && li2[1] === "B" && li2[2] == "C");

    auto li3 = "A,B,C".split_char(',');

    xassert("char_split_char", li3[0] === "A" && li3[1] === "B" && li3[2] === "C");
    
    auto li4 = "A,,B,,C".split_str(",,");

    xassert("char_split_str", li4[0] === "A" && li4[1] === "B" && li4[2] === "C");
    
    auto li5 = "A,,B,,C".split_maxsplit(/,,/, 1);

    xassert("char_split_maxsplit", li5[0] === "A" && li5[1] === "B,,C");

    xassert("char_delete", "ABC".delete(0,1) === "BC);

    xassert("wchar_substring", wstring("ABC").substring(0,1) === wstring("A"));
    
    auto li6 = "A,B,C".split_str(",");
    
    xassert("join", li6.join(" ") === "A B C");
    
    auto li7 = "A,B,C".split(/,/g);
    
    xassert("split test", li7[0] === "A" && li6[1] === "B" && li7[2] === "C");
    xassert("index_count test", "ABCABC".index_count("ABC", 2, -1) == 3);
    xassert("index_regex_count test", "ABCABC".index_regex_count(/ABC/g, 2, -1) == 3);
    xassert("rindex_count test", "ABCABC".rindex_count("ABC", 2, -1) == 0);
    xassert("rindex_regex_count test", "ABCABC".rindex_regex_count(/CBA/g, 2, -1) == 0);
    xassert("rindex_regex test", "ABCABC".rindex_regex(/CBA/, -1) == 5);
    xassert("match_count test", "ABCABCABC".match_count(/ABC/, 3));
    xassert("match_count test", "ABCABCABC".match_count(/ABC/, 4) == false);
    xassert("sub_count test", "ABCABCABC".sub_count(/ABC/g, "X", 2) === "XXABC");
    xassert("sub_block test", "ABCABCABC".sub_block(/ABC/g) { string("X"); } === "XXX");
    xassert("sub_block_count test", "ABCABCABC".sub_block_count(/ABC/g, 2) { string("X"); } === "XXABC");
    xassert("sub_block_count test2", "ABCABCABC".sub_block_count(/ABC/g, 2) { it.substring(0,1); } === "AAABC");
    xassert("scan_block test", "123 456 789".scan_block(/\d\d\d/g) { it.substring(0, 1); }.join("") === "147");
    xassert("scan_block_count test", "123 456 789".scan_block_count(/\d\d\d/g, 2) { it.substring(0, 1); }.join("") === "14");
    
    auto li8 = "ABC".scan(/./);
    
    xassert("scan test", li8[0] === "A" && li8[1] === "B" && li8[2] === "C");
    
    var bufX = "ABC".to_buffer();
    bufX.append_str("DEF");
    
    xassert("to_buffer test", bufX.to_string() === "ABCDEF");
    xassert("split block test", "ABC,DEF,GHI".split_block(/,/) { it.substring(0,1); }.join("") === "ADG");
    xassert("split block test", "ABC,DEF,GHI".split_block_count(/,/, 2) { it.substring(0,1); }.join("") === "AD");
    xassert("regex test", "ABC".scan(/./).join("") === "ABC");
    
    xassert("regex equals test", /aaa/g === /aaa/g);
    
    list<string>*% group_strings = new list<string>();
    
    int num_group_strings_in_regx = 0;
    "id: abc mail: abc@icloud.com".scan_group_strings(/(\w+):/, group_strings, &num_group_strings_in_regx);
    
    xassert("regex scan group strings test", group_strings[0] === "id" && group_strings[1] === "mail" && num_group_strings_in_regx == 1);
    
    list<string>*% group_strings2 = new list<string>();
    
    "id: abc mail: abc@icloud.com".scan_group_strings(/(\w+): ([\w@.]+)/, group_strings2, &num_group_strings_in_regx);
    
    xassert("regex scan group strings test2", group_strings2[0] === "id" && group_strings2[1] === "abc" && group_strings2[2] === "mail" && group_strings2[3] === "abc@icloud.com" && num_group_strings_in_regx == 2);

    return 0;
}

compile with -str option to link libpcre
```

# smart pointer

```C
> vin a.c
#include <comelang2.h>

int main(int argc, char** argv)
{
    var p = s"ABC".to_buffer().to_pointer();
    
    printf("%c\n", *p);
    
    p+=4;
    
    printf("%c\n", *p);
    
    return 0;
}
> comelang a.c
> ./a
A
a.c 9: out of range of smart pointer(2)
```

# stackfame

```C
> vin a.c
#include <comelang2.h>

int fun()
{
    stackframe();
    return 0;
}

int fun2()
{
    return fun();
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
> comelang2 -cg a.c
> ./a
a.c 5
a.c 11
a.c 16
```

for debugging.
require -cg option.

# range check

```C
> vin a.c
#include <comelang2.h>

int main(int argc, char** argv) 
{
    int a[3] = { 1, 2, 3 };
    
    printf("%d\n", (a + 1)!{a, a + 3});
    
    return 0;
}
> comelang2 -cg a.c
> ./a
2
> vin a.c
#include <comelang2.h>

int main(int argc, char** argv) 
{
    int a[3] = { 1, 2, 3 };
    
    printf("%d\n", (a + 5)!{a, a + 3});
    
    return 0;
}
> comelang2 -cg a.c
> ./a
a.c 7: range check error
libcomelang2.c 96
a.c 7
```

require -cg option for show stackframe()

```
> comelang2 new x
> cd x; vin main.c
#include <comelang2.h>

int main(int argc, char** argv)
{
    int a[3];
    
    printf("%d\n", a[4]);
    
    return 0;
}
> comelang2 debug
comelang2 header -common-header a.c
comelang2 -common-header -gdwarf-4 -cg  -c a.c -o a.debug.o
comelang2 -common-header -gdwarf-4 -cg  a.debug.o -o x-debug
rm -f *.log
./x-debug
a.c 8: range check error
a.c 8 #208
make: *** [Makefile:90: debug] Error 2
system: No error information
```

# Method Generics

```C
impl list<T>
{
    template<R> list<R>*% map2(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            result.push_back(block(parent, it.item));
            
            if(((sDummyCurrentStack*)parent)->__method_block_result_kind__ != 0) {
                return result;
            }

            it = it.next;
        }

        return result;
    }
}

int main(int argc, char** argv)
{
    list<int>*% li = new list<int>();
    
    li.add(1).add(2).add(3);
    
    li.map2<string> {
        return xsprintf("%d", it);
    }.each {
        puts(it);
    }
}
```

no type inference

# typeof

```C
#include <comelang2.h>

int main(int argc, char** argv) 
{
    int a = 123;
    puts(typeof(a));
    
    return 0;
}
```

statically typeof

# Memory leak detector

```c 
#include <comelang2.h>

void fun()
{
    var a = gc_inc(new int);
    *a = 123;

    stackframe();
                        
    printf("%d\n", *a);
}
                            
int main(int argc, char** argv) 
{
    fun();
                                    
    return 0;
}
~/comelang2 # comelang2 a.c
~/comelang2 # ./a
123
1 memory leaks. 1 alloc, 0 free.If you require debugging, copmpile with -cg option
~/comelang2 # comelang2 -cg a.c
~/comelang2 # ./a
a.c 9
a.c 16
123
#1 (int): a.c 16, a.c 5, 
1 memory leaks. 1 alloc, 0 free.
~/comelang2 # 
```
                                        

# afterword

親友DIO、僕はついに天の国を見てきたよ。

version 1.2.5でようやく完成です。

LLVM-C++, LLVM-C, Cトランスパイラと、このコンパイラは実は３作目なんですが、ようやく満足のいくヒープシステムが作れました。

適当に書いてもメモリリークはあまりないでしょう。Cコンパイラは動的エラーが不安ですが、valgrindを使ってください。メモリリークも検出してくれます。

この言語のライブラリにはRubyっぽい文字列ライブラリもあります。

結局僕はRubyが好きだったのでしょう。好きすぎてRubyっぽいシェル、RubyっぽいJava、Rubyっぽいコンパイラと３作もRubyっぽいものを作ってしまいました。

余生はRubyクローンを作って過ごしたいと思います。Rubyクローンを作って、Rubyの作者のまつもとゆきひろさんにお会いできればなと思います。それで今までやってきたことも肯定されるかもしれません。 

まあ、プログラミングを楽しんでください。社会生活も楽しんでください。社会生活を犠牲にするほどはプログラミングはしないでください。

それさえ気をつければプログラミングは思い通りに動いた時に最高の瞬間を与えてくれるでしょう。

Enjoy Programing!


My dear friend DIO, I have finally seen the kingdom of heaven.

It is finally completed with version 1.2.5.

This is actually my third compiler, including LLVM-C++, LLVM-C, and the C transpiler, but I was finally able to create a heap system that I was satisfied with.

Even if you write it properly, there will not be many memory leaks. If you are concerned about dynamic errors with the C compiler, please use valgrind. It also detects memory leaks.

This language also has a Ruby-like string library.

I guess I liked Ruby after all. I love it so much that I've created three Ruby-like products: a Ruby-like shell, a Ruby-like Java, and a Ruby-like compiler.

I would like to spend the rest of my life creating Ruby clones. I would like to create a Ruby clone and meet Yukihiro Matsumoto, the creator of Ruby.

So what we have been doing up until now may be confirmed.

Well, have fun programming. Enjoy your social life too. Don't program so much that you sacrifice your social life.

If you are careful about this, programming will give you the best moments when it works as you want.

Enjoy Programing!
