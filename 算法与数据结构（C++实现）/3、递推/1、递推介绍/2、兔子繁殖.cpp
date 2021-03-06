/*

一对兔子，从出生后第3个月起每个月都生一对小兔子。
小兔子长到第3个月后每个月又生一对兔子。
假如兔子都不死，并且第1个月出生一对小兔子，请问第n个月有多少只兔子？

分析
第一个月：1对兔子
第二个月：1对兔子
第三个月：已有的兔子（上个月的1对兔子）+新生的兔子（第一个月兔子新出生的1对兔子）=2对兔子
第四个月： 
已有的兔子（上个月的2对兔子）+
新生的兔子（两个月前的兔子，第二月的兔子这个时候都有生育能力，都可以生小兔子，所以1对）=
2+1=3对兔子
第五个月：
已有的兔子（上个月的3对兔子）+
新生的兔子（两个月前的兔子，第三月的兔子这个时候都有生育能力，都可以生小兔子，所以2对）=
3+2=5对兔子
第六个月：
如何设f(n)表示第n个月的兔子总数
已有的兔子（上个月的5对兔子，为f(n-1)）+
新生的兔子（两个月前的兔子，第四月的兔子这个时候都有生育能力，都可以生小兔子，所以3对，为f(n-2)）=
f(n-1)+f(n-2)=5+3=8对兔子
...........
第n个月：f(n)= 
已有的兔子（f(n-1)）+ 新生的兔子(前两个月的兔子f(n-2)都有繁殖能力，都可以生小兔子)
=f(n-1)+f(n-2)

得到递推关系式：f(n)=f(n-1)+f(n-2)

枚举找规律：
一月  1
二月  1
三月  2
四月  3
五月  5
六月  8

*/


