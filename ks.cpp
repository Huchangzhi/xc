#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<windows.h>
using namespace std;
void o1(char *zz){
    while(*zz != '\0'){
        printf("%c",*zz);
        zz++;
        Sleep(40);
    }
    printf("\n");
}
int main(){
    char a[] = "本程序为c++程序，可能会被360报毒，运行前请关闭360\n本程序无毒，请在windows下面运行\n作者：胡长治\n班级:自贡市汇东实验学校春华校区5年级三班\n联系电话:13890016539\n收货地址：自贡市尚东国际8栋一单元19楼1901\n电子邮箱地址：17380505591@aliyun.com\n最后有彩蛋哦\n输入y开始:";
    o1(a);
    char b;
    cin>>b;
    if(!(b == 'Y' || b=='y')){
        return 0;
    } 
    system("cls");
    char c[] = "我已经读了3年小创了，我下个学期6年级\n我是从3年级开始订阅小创的，我本来这个暑假想来编辑部的\n但因为一些原因没来\n我很喜欢读小创，订阅了课堂内外创新作文、课堂内外小学版和世界儿童课外阅读\n所以我编了这个程序\n10秒后继续";
    o1(c);
    Sleep(10000);
    system("cls");
    char a2[] = "我最喜欢小创中的吹牛大王栏目，9月刊中的《打喷嚏会传染》我在姐姐的“老课堂内外”上看过\n还有之前主题是手机时的的第一篇文章，我也在姐姐的书上看到过\n我真没想到小酷龙居然在小阅也出现了\n我这次写信其实是想超过9月刊的那个天花板\n我学了好几年编程了，这次就用不同的方法写信\n还有，我想问一下，怎么才能写好书法，我的字真的很差（绝对不是因为字差才编程）\n5秒后继续";
    o1(a2);
    Sleep(5000);
    system("cls");
    char a3[] = "还有，我真的想上刊，重要的事情说30遍";
    o1(a3);
    Sleep(2000);
    for(int i=1;i<=30;i++){
        printf("上刊\n");
    }
    Sleep(5000);
    char a4[] = "你以为就完了吗，不，接下来就是欣赏环节了(彩蛋)，得注意任务栏，等会弹出的窗口可能不会置顶，输入y继续:";
    o1(a4);
    cin>>b;
    if(!(b == 'Y' || b=='y')){
        return 0;
    } 
    system("a.exe");
    char a5[] = "这个安卓图标怎么样，还没完，输入y继续:";
    o1(a5);
    cin>>b;
    if(!(b == 'Y' || b=='y')){
        return 0;
    } 
    system("b.exe");
    char a6[] = "这个梅花怎么样，还没完，输入y继续:";
    o1(a6);
    cin>>b;
    if(!(b == 'Y' || b=='y')){
        return 0;
    } 
    system("c.exe");
    char a7[] = "所以，我可以上刊吗?\n版权声明：本文部分借鉴为CSDN博主「BugMiaowu2021」的文章，原文链接：https://blog.csdn.net/m0_46278037/article/details/113760830";
    o1(a7);
    system("pause");
    return 0;
}