

### Java代码 

[TOC]



#### 11Java数组的输入



#### 10 字符串反转

 Java 的反转函数 reverse() 将字符串反转：





#### 09 Integer to String

nteger.toString(int par1,int par2),par1表示要转成字符串的数字，par2表示要转成的进制表示，如：

Integer.toString(22,2),表示把22转成2进制表示的字符串，

Integer.toString(22,10),表示把22转成10进制表示的字符串，

Integer.toString(22,16),表示把22转成16进制表示的字符串，

Integer.toString(22,36),表示把22转成36进制表示的字符串，即10到36之间的数字表示为a到z的表示。


#### 08  Java toCharArray() 方法

toCharArray() 方法将字符串转换为字符数组。

没发现具体用处：

```java
public class Test_tochararray {
    public static void main(String[] args) {
        String str = "www.google.com ";
        System.out.println(str);
        System.out.println(str.toCharArray());
    }
}
String str = new String("www.google.com");
```



#### 07   数组的遍历代码

`Array`类

ArrayList 类是一个可以动态修改的数组，与普通数组的区别就是它是没有固定大小的限制，我们可以添加或删除元素。4                                                                         

ArrayList 继承了 AbstractList ，并实现了 List 接口。

```java
package _01Xor;

import java.util.*;

public class Test02DoubleArrayList {
    public static void main(String[] args) {
        int[][] ns = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
        
        //此处直接打印ns,会输出ns的地址
        System.out.println(ns.length);
        
        //此处类似于C语言的指针 将二维数组第一组的地址赋给了arr0这个指针位置，int[]表示 int * 
        int[] arr0 = ns[0];
        
        System.out.println(arr0.length);
        //两种语句的区别
        int[] arr1 = {1,2,3,4,56,4};
        
        //此处相当于开辟了一片存储区域赋给了arr2
        int[] arr2 = new int[6];

//        System.out.println(arr1);
//        System.out.println(arr2);
//        遍历输出一维数组？
        for (int i = 0; i < arr1.length; ++i) {
            System.out.print(arr1[i]+" ");
        }
        for (int i = 0; i < arr2.length; ++i) {
            System.out.print(arr2[i]+" ");
        }
        for (int n : arr1) {
            System.out.print(n+" ");
        }
        //利用Array标准库快速打印
        System.out.println("以下内容是 标准库函数 输出的结果 \n");
        System.out.println(Arrays.toString(arr1));
        //此处打印二维数组只会打印出 二维数组第一位的地址，故此方法只适用于一维数组的打印
        System.out.println(Arrays.toString(ns));
    }
}

```



#### 06 Java StringBuffer 和 StringBuilder 类

StringBuilder 类在 Java 5 中被提出，它和 StringBuffer 之间的最大不同在于 StringBuilder 的方法不是线程安全的（不能同步访问）。

由于 StringBuilder 相较于 StringBuffer 有速度优势，所以多数情况下建议使用 StringBuilder 类。

#### ==String toString() 返回此序列中数据的字符串表示形式==

> 存在错误的原因 ： 没有在main函数中使用而是直接在类中 使用append();

```java
//Java代码 append存在问题

//无法通过sb.append引用
package _01Xor;
import java.lang.*;
public class TestStringBuilder {
    public static void main(String[] args) {
        StringBuilder flu = new StringBuilder("0.");
        flu.append(",");
    }

}
package _01Xor;
import java.lang.*;
public class TestStringBuilder {
    public static void main(String[] args) {
        StringBuilder flu = new StringBuilder(10);
        flu.append("Rabbit··");
        System.out.println(flu);
        flu.append("i");
        System.out.println(flu);
        flu.insert(8,"Java");
        System.out.println(flu);
        flu.delete(5,8);
        System.out.println(flu);

    }

}
```



#### 05 Java断言使用

断言（Assertion）是一种调试程序的方式。在Java中，使用`assert`关键字来实现断言。

我们先看一个例子：

```
public static void main(String[] args) {
    double x = Math.abs(-123.45);
    assert x >= 0;
    System.out.println(x);
}
```

语句`assert x >= 0;`即为断言，断言条件`x >= 0`预期为`true`。如果计算结果为`false`，则断言失败，抛出`AssertionError`。

使用`assert`语句时，还可以添加一个可选的断言消息：

```
assert x >= 0 : "x must >= 0";
```

这样，断言失败的时候，`AssertionError`会带上消息`x must >= 0`，更加便于调试。

Java断言的特点是：断言失败时会抛出`AssertionError`，导致程序结束退出。因此，断言不能用于可恢复的程序错误，只应该用于开发和测试阶段。

对于可恢复的程序错误，不应该使用断言。例如：

```
void sort(int[] arr) {
    assert arr != null;
}
```

应该抛出异常并在上层捕获：

```
void sort(int[] arr) {
    if (x == null) {
        throw new IllegalArgumentException("array cannot be null");
    }
}
```

#### 04 Java子函数  static 关键字

private 与 static 关键字  

- 注意子函数不要写在main里面！

### 03 Java 输入



```java
 public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        int age = input.nextInt();
        System.out.println(name+" 您好， 您的年龄为 ："+age);
        System.out.printf("%s 你好 ，你的年龄为 ： %d", name,age);
    }
```



### 02Java ArraList

ArrayList 类位于 java.util 包中，使用前需要引入它，语法格式如下：

```java
import java.util.ArrayList; // 引入 ArrayList 类

ArrayList<E> objectName =new ArrayList<>();　 // 初始化
```

- **E**: 泛型数据类型，用于设置 objectName 的数据类型，**只能为引用数据类型**。
- **objectName**: 对象名。

ArrayList 是一个数组队列，提供了相关的添加、删除、修改、遍历等功能

#### 访问元素

访问 ArrayList 中的元素可以使用 get() 方法：

#### 删除元素

如果要删除 ArrayList 中的元素可以使用 remove() 方法： 同样也是以0为下标

#### 

## 实例



```java
**import** java.util.ArrayList;

**public** **class** RunoobTest {
  **public** **static** **void** main(String[] args) {
    ArrayList<String> sites = **new** ArrayList<String>();
    sites.add("Google");
    sites.add("Runoob");
    sites.add("Taobao");
    sites.add("Weibo");
    System.out.println(sites.get(1)); *// 访问第二个元素*
  }
}
```



**注意**：数组的索引值从 0 开始。

#### 01生成随机数的代码：

```java
import java.util.Random;
//包含随机数的文件

//randNumber 将被赋值为一个 MIN 和 MAX 范围内的随机数
Random rand = new Random();
int randNumber =rand.nextInt(MAX - MIN + 1) + MIN;
//或者 直接使用
int randNumber = new Random().nextInt(MAX - MIN + 1) + MIN;

//生成区间 [64,128] 中随机值的代码为：

rand.nextInt(65)+ 64;



```



#### arraylist 序列代码

```java
package _01Xor;

import java.util.ArrayList;

public class Test01ArrayList {
    public static void main(String[] args) {
        ArrayList<String> sites = new ArrayList<String>();
        sites.add("Google");
        sites.add("Runoob");
        sites.add("Taobao");
        sites.add("Weibo");
        System.out.println(sites);
        ArrayList<Integer> employee = new ArrayList<Integer>();
        employee.add(3);
        employee.add(6);
        employee.add(6);
        employee.add(35);
        employee.add(342);
        employee.add(35);
        System.out.println(employee);
        //访问元素
        System.out.println(sites.get(3));
        System.out.println(sites.get(2));
        System.out.println(sites.get(1));
        System.out.println(employee.get(2));
        System.out.println(employee.get(1));
        System.out.println(employee.get(3));
        System.out.println(employee.set(3,9));
        System.out.println(sites.set(1,"WIKI"));
        System.out.println(sites.get(1));

    }
}
```



1、puppy练习程序

```java
package _01Xor;

//import java.awt.desktop.SystemEventListener;
//没有public修饰符 不能使用命令行访问
//        String 与String[]在此处地方的区别
//        此处运算直接相加？
//    构造函数
public class Puppy {
    int puppyAge;
    public Puppy(String name) {
        System.out.println("小狗的名字是 ： "+ name);
    }
//    成员函数内部操作成员变量
    public void setAge(int age) {
        puppyAge = age;
    }
    public int getAge() {
        System.out.println("小狗的年龄为 ："+ puppyAge);
        return puppyAge;
    }

    public static void main(String[] args) {
        /*创建对象*/
        Puppy myPuppy01 = new Puppy("peter");
        myPuppy01.setAge(2);	
        if(myPuppy01.getAge() == 2) {
            System.out.println("Yes !");
        }
        System.out.println("变量值为 ："+myPuppy01.getAge());
        System.out.println("变量值为 ："+myPuppy01.puppyAge);
    }
}

```

### 2.2	String函数变量

#### Employee.java

 **Employee** 类的构造器的功能：

- this指针

### 2.3 一个源文件 只能有一个类？

```java
package _01Xor;

import java.lang.annotation.ElementType;

public class Employee {
    String name;
    int age;
    String designation;
    double salary;
//    Employee 类的构造器
    public Employee(String name) {
    this.name  = name;
    }
//    set Age
    public void empAge(int empAge) {
        age = empAge;
    }
    public void empDesignation(String empDesign) {
        designation = empDesign;
//        String =?

    }
    //        Set salary
    public void empSalary(double empSalary) {
        salary = empSalary;
    }
//    Print()
    public void print() {
        System.out.println("姓名 ："+name);
        System.out.println("年龄 : "+age);
        System.out.println("职位 ："+designation);
        System.out.println("薪水 ："+salary);
    }

    public static void main(String[] args) {
        Employee empOne = new Employee("Boss");
        Employee empTwo = new Employee("Secretary");
        //        调用这两个对象的成员方法
        empOne.empAge(29);
        empOne.empDesignation("高级工程师");
        empOne.empSalary(600000);
        empOne.print();

        empTwo.empAge(23);
        empTwo.empDesignation("菜鸟");
        empTwo.empSalary(100000);
        empTwo.print();


    }
}

```

```java
package _01Xor;

public class Employee {
    String name;
    int age;
    String designation;
    double salary;
    //构造函数
    public Employee (String name) {
        this.name = name;
        System.out.println(this.name +" is a Printer executive !");

    }
    public void empAge(int empAge) {
        age = empAge;
    }
    public void empDesignation(String empDesignation) {
        designation = empDesignation;
    }
    public void empSalary(double empSalary) {
        salary = empSalary;
    }
    //关于此处不使用指针的的程序
    public void empPrinter() {
        System.out.println("姓名 ："+ this.name);
        System.out.println("年龄 ："+ this.age);
        System.out.println("职位 ："+ this.designation);
        System.out.println("薪水 ："+ this.salary);
        System.out.println(this.name +" 打印结束 ！");
    }

    public static void main(String[] args) {
        Employee empOne = new Employee("Big Boss");
        Employee empTwo = new Employee("Secretary");

        empOne.empAge(28);
        empOne.empDesignation("部门主管");
        empOne.empSalary(100000);
        empOne.empPrinter();
        empTwo.empAge(22);
        empTwo.empDesignation("秘书");
        empTwo.empSalary(50000);
        empTwo.empPrinter();
    }
}









```

```java
package _01Xor;

public class Main {
    public static void main(String[] args) {
        int a = 60;/* 60 = 0011 1100 */
        int b = 13;/* 13 = 0000 1101 */
        int c = 0;
        c = a & b;
        System.out.println("a & b = "+ c);
        c = a| b;
        System.out.println("a | b = "+ c);
        c = a ^ b;
        System.out.println("a ^ b = "+ c);
        c = ~a;
        System.out.println("~a = "+c);
        c = a>>2;
        System.out.println("a>>2 = "+c);
        c = a<<2;
        System.out.println("a<<2 = "+c);
        c = a>>>2;
        System.out.println("a>>>2 = "+c);
//        String s = """
//                   SELECT * FROM
//                     users
//                   WHERE id > 100
//                   ORDER BY name DESC
//                   """;
        int a1 = 72;
        int b1 = 105;
        int c1 = 65281;
        String S = "  "+(char)a1 + (char)b1 + (char)c1;
        System.out.println(S);
        
    }

}

```

字符数组

```java
package _01Xor;


public class Main {
    public static void main(String[] args) {
        String[] names = {"ABC", "Lironghui","niuronghai", "Lao"};
        String sPtr = names[1];
        names[1] = "SB";
        System.out.println(sPtr);
        System.out.println(names[1]);
    }
}
```

