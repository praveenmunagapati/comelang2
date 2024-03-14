
# comelang2

come together!

もう一つのモダンなCコンパイラ。automatically-free-systemとリファレンスカウントGCの間をとったようなヒープシステムがありコレクションライブラリ、文字列ライブラリを備えてます。

version 20.0.0

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

# インストール

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

```
git clone https://github.com/ab25cq/comelang2
cd comelang2
bash fast_build.sh
bash clean-self-host.sh
bash fast_build.sh (getting with -O2 comelang2)
```

vinというviクローン、zedという文字列処理インタプリタ、mfというコンソールファイラ、shshというオリジナルのシェルをインストールするには以下のようにします。

```
bash all_build.sh
```

# Histories

20.0.0 ドキュメントを整備しました。

# 言語仕様

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

# 文法

POSIXには準拠していませんが、C言語と互換性があります。大抵のCヘッダーファイルはそのままincludeできると思います。

# ライブラリ

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

li.each { puts(it); }としても全てのリストの要素にアクセスできますが、break, continu, returnが使えません。foreachを使った方が効率的にもいいです。foreachは第一引数が要素が入った変数の名前、第二引数がリストとなります。

foreachはマクロで実装されてます。

#define foreach(o1, o2) for(var o2_saved = (o2), var o1 = (o2_saved).begin(); !(o2_saved).end(); o1 = (o2_saved).next())

以下は全メソッドの解説です。

list<T>*% initialize(list<T>*% self);

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

list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values) 

配列で初期化されたリストを作成します。

```C
int values[3] = { 1, 2, 3 };

var li = new list<int>.initialize_with_values(3, values);
```

void finalize(list<T>* self) 

デストラクターです。自動的に消去される場合、手動でdeleteする場合に呼ばれます。

```C
list<int>* li = borrow gc_inc(new list<int>());
li.add(1).add(2).add(3);
delete li;  // finalizeが呼ばれる
```

gc_incはヒープのリファレンスカウントを+1します。borrowはヒープの自動解放対象から外し、%をつけない変数に代入できるようにします。この場合ヒープは手動で管理されて、deleteしないとメモリリークが発生します。 メモリリークが発生した場合プログラムを実行するとメモリリークの回数が表示されます。-cgオプションをつけてコンパイルするとヒープが生成されたソースファイルの位置のスタックフレームが表示されます。デバッグも容易だと思います。

void force_finalize(list<T>* self) 

```C
list<int>* li = borrow gc_inc(gc_inc(new list<int>()));
li.add(1).add(2).add(3);
force_delete li;  // force_finalizeが呼ばれる
```

リファレンスカウントの数に関わらずヒープを解放します。

list<T>*% clone(list<T>* self)

```C
var li = [1,2,3,4,5];
var li2 = clone li;   // cloneがよばれる
```

cloneはディープコピーです。要素も再起的にcloneされて、メモリが複製されます。liとli2はリファレンスカウントが1のためスコープを抜けると自動的に消去されます。

ディープコピーしたくない場合は以下です。

```C
var li = [1,2,3,4,5];
var li2 = li;
```

li2はliと同じものを指しています。[1,2,3,4,5]のヒープはリファレンスカウントが２のためliとli2がスコープを抜けるとその時リファレンスカウントが-2されて0になり、[1,2,3,4,5]は解放されます。

```C
var li = [1,2,3,4,5];
list<int>* li2 = li;
```

この場合もliとli2は同じものをさしていますが、liが解放された後にli2にアクセスするとセグメンテーションフォルトを起します。

list<T>* add(list<T>* self, T item)

```C
var li = [s"ABC", s"DEF", s"GHQ"]:
li.add(s"OPQ");
```

s"ABC"はstring型の文字列でヒープに確保されます。string("ABC")としても同じです。stringはtypedef char*% string;と定義されていて、単なるchar型の配列としても扱えます。なのでputs(s"ABC");とするとABC\nが出力されます。この場合生成された文字列は自動的にfreeされます。

liはlist<string>*%です。li.add(s"OPQ");のs"OPQ"はリファレンスカウントが+1されて、正しくliに格納されます。liが解放されるとき格納された、s"ABC", s"DEF", s"GHQ", s"OPQ"は正しくfreeされます。

void pop_front(list<T>* self) 

リストの先頭を削除します。ヒープが格納されていた場合要素がfreeされます。ヒープでなく"ABC"などヒープでないポインタの場合はfreeされません。

list<T>* push_back(list<T>* self, T item)

addと同じです。

string to_string(list<T>* self)

```C
    var li = ["ABC", "DEF", "GHQ"];
    puts(li.to_string());
```

[ABC,DEF,GHQ]が出力されます。要素の全てにto_stringが実行されます。comelang2で定義されている型はto_string()が実装されています。オリジナルのクラスの場合、このメソッドを実行するためにはto_stringを実装する必要があります。

liはlist<char*>*%で文字列のポインタが格納されています。char*%ではないため格納された要素はfreeされません。

T& begin(list<T>* self) 
T& next(list<T>* self) 
bool end(list<T>* self) 

foreachのため定義されてます。すべての要素にアクセスしたい場合使います。

list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*)) 

```C
    var li = ["ABC", "DEF", "GHI"];
    
    li.each {
        puts(it);
    }
```

ABC\nDEF\nGHI\nが出力されます。メソッドブロックはit,it2,it3にメソッドブロックの引数が格納されます。この場合itは各要素が入っています。foreachと違い、break, continue, returnは実行できません。returnするとメソッドブロックから脱出するだけです。

T& item(list<T>* self, int position, T default_value) 

```C
    var li = ["ABC", "DEF", "GHI"];
    puts(li.item(0, null)); // ABC
    puts(li.item(-1, null)); // GHI
    puts(li.item(-9999, "")); // ""
```

default_valueは範囲外アクセスの場合その値が返されます。<0の場合は後方から数えた要素が返されます。

int length(list<T>* self)

```C
    var li = [1,2,3];
    puts(li.length().to_string()); // 3
```

要素の数が返されます。

list<T>* insert(list<T>* self, int position, T item)

```C
    var li = [1,2,3];
    
    li.insert(1@position, 5@item); // [1,5,2,3]
```

要素をpositionに追加します。@postionはアノテーションでコメントとして扱われます。

liは[1,5,2,3]となるはずです。


list<T>* reset(list<T>* self) 

```C
    var li = [1,2,3];
    
    li.reset();
    
    li.length().to_string().puts(); // 0
```

要素をクリアします。0が出力されます。

list<T>* remove(list<T>* self, T item) 

```C
    var li = [1,2,3];
    
    li.remove(3); // [1,2]
    
    li.to_string().puts();
```

itemとequalsがマッチするものを削除します。
liは[1,2]です。

list<T>* delete(list<T>* self, int head, int tail)

```C
    var li = [1,2,3,4,5];
    
    li.delete(3,-1); // [1,2,3]
    li.delete(0,1); // [2,3];
```

範囲に入っているものを削除します。-1は末尾です。
liは[1,2,3]です。

list<T>* replace(list<T>* self, int position, T item)

```C
    var li = [1,2,3,4,5];
    
    li.replace(1, 7); // [1,7,3,4,5]
```

アイテムを置き換えます。
liは[1,7,3,4,5]です。要素がヒープの場合置き換える要素はリファレンスカウントが-1されて、リファレンスカウントが0なら削除されます。

int find(list<T>* self, T& item, int default_value) 

```C
    var li = [1,2,3,4,5];
    
    li.find(3, -1@default_value); // 2
```

equalsがマッチする要素の先頭からの位置を返します。この場合2です。default_valueは見つからなかった場合の値です。

bool equals(list<T>* left, list<T>* right)

```C
    [1,2,3].equals([1,2,3]).to_string().puts(); // true
```

オブジェクトが引数と内容が一緒か確認します。要素ごとにequalsが実行されすべての要素で真ならtrueを返します。

list<T>*% sublist(list<T>* self, int begin, int tail) 

```C
    [1,2,3,4,5].sublist(0,2); // [1,2]
    [1,2,3,4,5].sublist(3,-1); // [4,5]
    [1,2,3,4,5].sublist(3,-2); // [4]
```


T& operator_load_element(list<T>* self, int position) 

```C
    var li = [1,2,3,4,5];
    
    printf("%d\n", li[3]); // 4
    printf("%d\n", li[-1]); // 5
    printf("%d\n", li[-9999]); // 0
```

範囲外は0clearされた値を返します。

T& operator_store_element(list<T>* self, int position, T item) 

```C
    var li = [1,2,3,4,5];
    
    li[0] = 123; // [123,2,3,4,5]
```

list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) 

```C
    var li = [1,2,3,4,5];
    
    li[0..2].to_string().puts(); // [1,2]
    li[3..-1].to_string().puts(); // [4,5]
```

bool operator_equals(list<T>* self, list<T>* right) 

```C
    [1,2,3] === [1,2,3]; // true
    [1,2,2] === [1,2,3]; // false
```

各要素にequalsが呼ばれます。

bool operator_not_equals(list<T>* left, list<T>* right) 

```C
    [1,2,3] !== [1,2,3]; // false
    [1,2,2] !== [1,2,3]; // true
```

bool contained(list<T>* self, T item) 

```C
    [1,2,3].contained(3); // true
    [1,2,3].contained(4); // false
```

list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) 
list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) 
list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) 

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

lambda式でソートします。

list<T>*% merge_list(list<T>* left, list<T>* right) 
list<T>*% merge_sort(list<T>* self) 
list<T>*% sort(list<T>* self) 

```C
    [3,7,2,5].sort(); // [2,3,5,7]
```

list<any>*% map(list<T>* self, void* parent, any (*block)(void*, T&))

```C
    ["1","2","3"].map { return atoi(it) }  // [1,2,3]
```

各要素に式を実行して、その結果のリストを返します。ただ、このmapはanyを返すのでヒープを使うものはメモリリークを起こします。次のmap2を使ってください。

template<R> list<R>*% map2(list<T>* self, void* parent, R (*block)(void*, T&))

```C
    [1,2,3].map<string> { return it.to_string() } // ["1", "2", "3"]
```

list<T>*% reverse(list<T>* self) 

```C
    [1,2,3].reverse(); // [3,2,1]
```

list<T>*% uniq(list<T>* self) 

```C
    [8,8,2,2,3,3].uniq(); // [8,2,3]
```

隣あった同じ要素を削除します。sort()しないとダメかもしれません。

list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))

```C
    [1,2,3,4,5].filter { return it > 2 };  // [3,4,5]
```

list<T>*% operator_add(list<T>*% left, list<T>*% right) 

```C
    [1,2,3] + [4,5]; // [1,2,3,4,5]
```

list<T>*% operator_mult(list<T>* left, int right) 

```C
    [1,2,3] * 2; // [1,2,3,1,2,3]
```

string join(list<T>* self, char* sep=" ") 

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

insert adds an element. foreach's iterator only returns the key. If you want to access item, please use it.

foreachのイテレーターはキーしかアクセスできません。itがイテレーター名です。

The map representation is

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    map<char*, int>*% ma = ["AAA":1, "BBB":2, "CCC":3]:
    
    foreach(it, ma) {
        int item = ma[it];

        printf("%s %d\n", it, ma[it]);
    }
    
    return 0;
}
```

It becomes.

# tuple

A tuple is a container for elements of different types.

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    tuple3<int, int, char*>*% tu = new tuple3<int, int, char*>(1, 2, "ABC");
    
    printf("%d %d %s\n", tu.v1, tu.v2, tu.v3);
    
    return 0;
}
```

```
#include <comelang2.h>

int main(int argc, char** argv)
{
    tuple3<int, int, char*>*% tu = (1,2,"ABC");
    
    printf("%d %d %s\n", tu.v1, tu.v2, tu.v3);
    
    return 0;
}
```

# buffer

buffer is memory that can be appended.

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
    
    int* p = (int*)buf2.buf;
    
    printf("%d\n", *p);  // 1
    p++;
    printf("%d\n", *p);  // 2
    p++;
    printf("%d\n", *p);  // 3
    p++;
    
    return 0;
}
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

# Default parametor values, parametor labels

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


# Automatically-free-system(Reffrence Count GC)

Basically, if the return value of a function that generates a heap or the return value of new is assigned to a variable, the reference count will be increased by 1. A heap with a reference count of 0 will be freed if it is not assigned to a variable after executing one statement.

基本的に型名に%つけた変数に代入するとヒープはリファレンスカウントが+1されます。%をつけた変数が消える時リファレンスカウントが-1されます。

```
int main(int argc, char** argv)
{
    int*% a = new int;
    *a = 123;

    
    return 0;
}
```

You must add % to variables to which heap values are assigned. Variables appended with % will decrement the reference count of the object it owns by 1 when exiting the block.
The above code has no memory leak.

```
int main(int argc, char** argv)
{
    int* a = new int;
    *a = 123;

    
    return 0;
}
```

In this case, a compilation error will occur because you are trying to assign the new heap to a variable without a %. In order to pass the compilation

上記はコンパイルエラーとなります。

```
int main(int argc, char** argv)
{
    int* a = borrow gc_inc(new int);
    *a = 123;

    
    return 0;
}
```

will do. However, in this case, even after a exits the block, the heap reference count of new int is not set to -1, so a memory leak occurs.
You can use valgrind to check for memory leaks. If you call this file a.c, you can check it as follows.

コンパイルエラーとなりません。これはメモリリークとなります。

```
> comelang2 -g a.c
> valgrind ./a
```

```
> comelang2 -gdwarf-4 a.c
> valgrind ./a
```

It should report that there is a memory leak. If you want to know where the memory leak occurred

-gオプションをつけるとvalgrindでのメモリリークの追跡が可能になります。環境によっては-gdwarf-4としないといけないかもしれません。

```
> comelang2 -g a.c
> valgrind --leak-check=full ./a
```

```
> comelang2 -gdwarf-4 a.c
> valgrind --leak-check=full ./a
```


If you add % to the fields of C primitive arrays and structures, the reference count will be incremented by 1.

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

string is a typedef for char*%. string("ABC"); creates the string ABC in the heap and returns the heap.
When assigned to data.a, the reference count of the object returned by string("ABC") is increased by 1.
When the data of sData leaves the block, the finalizer of sData is automatically defined and data.a is also released.

stringはtypedef char*% string;と定義されています。string("ABC")はABC\0をヒープで確保してポインタを返します。
data.aに代入される時、そのヒープはリファレンスカウントが+1されます。
dataが消える時、sDataのファイナライザーが自動的に定義されてdata.aも解放されます。


When passing an object to a function, if the argument type has a %, the heap reference count will be incremented by 1.

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

When exiting from fun, the heap reference count of argument a is set to -1, so at the end of main, string ("ABC") has a reference count of 0 and is freed as expected.

If there is a heap in the return value of the function, unless it is assigned to a variable with a %, the reference count will remain 0 and it will be freed.

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

If you want to force the reference count to +1, use gc_inc, and if you want to force the reference count to -1, use gc_dec.

リファレンスカウントを強制的に+1したい場合はgc_inc()とします。強制的に-1したい場合はgc_dec()とします。

```
int main(int argc, char** argv)
{
    int* a = borrow gc_inc(new int);
    
    *a = 123;
    
    return 0;
}
```

これはメモリリークします。aは型名に%がついていないためaが消える時にリファレンスカウントが-1されないためです。

If you want to set the reference count to -1, you can also use delete. Both call the finalizer and free memory when the reference count reaches 0.

```
int main(int argc, char** argv)
{
   int* a = borrow gc_inc(new int);
   
   *a = 123;
   
   delete a;
   
   return 0;
}
```

No memory leaks.


When adding % to a variable that does not have %, add dummy_heap.

強制的に%をつけるにはdumm_heapとします。

```
int main(int argc, char** argv)
{
    int* a = borrow gc_inc(new int);
    int*% b = dummy_heap a;
    
    return 0;
}
```

In this case, b's reference count becomes 0 and it is freed when main ends. Since a does not have a %, it has nothing to do with the reference count.

この場合bが消える時にnew intのヒープは解放されます。

Use clone to copy objects. This is a deep copy and will create exactly the same thing. Structures etc. are also automatically created and cloned.

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

これはメモリリーク0です。

If you want to check whether a type is heap at compile time, use isheap(type name).

```
 int main(int argc, char** argv)
 {
     if(isheap(string)) {
         puts("string is heap type");
      }
      
      return 0;
}
```
isheap(型名）でコンパイル時に型名に%がつけてあるかわかります。ジェネリクスで便利でしょう。

This is used to determine whether the type argument of the generics is heap when creating a generics library. There won't be much use for anything else.

Heap values can also be assigned to pointers without %.

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

In this case, fun(str) will cause a segmentation fault when str runs out of life. However, if you want to own it, there will be no problem as long as you add a %. When assigning to a variable with % added, the reference count will be increased by 1.
This is because the object still exists even if the variable that owns it disappears.
If you are nervous, add % to the variable and assign the cloned one to ensure ownership.

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

Mixin-layers is a programming technique that creates an application so that layers are layered. The mechanism is to allow overwriting of a function and call the overwritten function from the overwritten function.

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

If you add !, the source file name and line number will be output if the value is null. Checked at runtime.

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

nil can be assigned to of null value variable type.(?)

null can be assigend to all variable type.

You can use nil instead of null for strictly checking null value.

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

If you use -gc option, you can use memory management of boehm GC. This require to build with bash clean-self-host.sh

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
