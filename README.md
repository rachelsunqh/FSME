# FSME

首先FSME生成fsm文件，如t1.fsm

然后FSMC利用t1.fsm生成t1.h文件（https://github.com/rachelsunqh/FSMC） 参考readme文件


-------------------------------------------------------------------------------
编译：

20181228 Kali GNU/Linux Rolling 编译通过（修改了几处，下一步就是用了）

qmake -o Makefile fsme.pro

make

就可以使用了




20181228:24


changeset:   24:ff4eae04cc8a
tag:         tip
user:        Alexander Darovsky <adarovsky@me.com>
date:        Mon Nov 06 17:49:44 2017 +0500
summary:     added base class support to root editor


