## **面向对象程序设计**
***
### 头文件与输入输出

~~~
iostream
using namespace std;
cin>>..>>..;
cout<<..<<..<<endl;

int i = 4;
int j(4);
~~~


### **bind**
~~~
int &y = x;
y = k;
~~~
- 引用，y相当于x的别名
- int &&k = i;//**illegal**
- int* &p = ps;//**right**
- int& *p//**illegal**
### **string**
字符串**类**
~~~
string s;
string *ps;
~~~
可以进行赋值，加减等操作
- string s1,s2;
- s1 = s2;
- string *ps1,*ps2;
- ps1 = ps2;
- substr(start,length)取子字符串

### new&delete
内存空间的申请和清除
~~~
new int;
new Stash;
new int[10];
delete p;
delete[] p;
~~~
~~~
int *psome = new int[10];
delete [] psome;
~~~
***

# class in C++
~~~
class Point{
public:
        void init(int x,int y);
        void move(int dx,int dy);
        void Print();

Privat:
        int x;
        int y;
}
~~~

## :: resolver

- **Class name::function name**
- **:: function name**   //function not in class
~~~
void S::f(){
    ::f();
    ::a++;
    a--;
}
~~~

## this

- class 中隐藏的参数类型
- eg: Point* this


# Objects vs. Class

~~~
class Point{
private:
    float x;
    float y;
public:
    Point(int x,int y);//构造函数
    Point(int deep);//函数重载
    Point() {x = 31; y = 17;};
    ~Point{
        cout<<~;
        print();
    }
    void print();
    void move(int dx,int dy);
}
~~~
- 自动完成初始化
- 允许函数重名，但参数表不同
- 无参数的构造函数为默认构造函数（default constructor）

### constructor
~~~
class X{
    int i;
public:
    X();
};
~~~

- 构造函数完成初始化

### destructor
~~~
class Y{
    public:
    ~Y();
};
~~~
- 本地变量生存期结束被析构

**程序三部分**
- Point.h:类的声明（成员变量、成员函数）
- Point.cpp：类的定义（需要 include） **creater**
- main.cpp : **user**

**Declarations(声明)**
- extern varibles
- function prototypes(函数声明)
- class/struct decaration
- inline function(内联函数)

## Standard header file structure
~~~
ifndef
define

endif
~~~

## STL
- 标准模板库
- 容器
- map:any key type,any value type.sorted
- vector: like C carry ,but auto-extending
- list: doubly-linked list

## vector
- eg:vector<string> note
- note.push_back(s)
- note.size()

## Basic Vector Operations
- **constructors**:
  - vector<Elem> c;
  - vector<Elem> c1(c2);

- **simple methods**:
  - V.size()
  - V.empty()
  - ==,!=,<,><=,>=
  - V.swap(v2)

- **iterators**:
  -I.begin()  //first position
  -I.end()    //last position

- **element access**:
  - V.at(index)
  - V[index]
  - V.front()   //first element
  - V.back()    //last element

- **add/remove/find**:
  - V.push_back(e)
  - V.pop_back()
  - V.insert(pos,e)
  - V.erase(pos)//删除
  - V.clear()
  - V.find(first,last,item)
  - vector 的自动增长只能通过上述操作进行，直接对不存在的下标赋值不会报错，但size不会增长

  **List Class**
    - 双向链表
    - x.front()
    - x.back()
    - x.push_back(intem) x.push_front(item)
    - x.pop_back() x.pop_back()
    - x.remove(item)

  **Maps**
    - 键-值对
    - hash map
    ~~~
    - map<k,v> m;
    - map<k,v> m1(m2);
    - map<k,v> m(b,e);
    - m.insert(e)
    - m.insert(beg,end)
    - m.insert(iter,e)
    - m.count(k)//看k是否存在
    - m.find(k)//找到k的对应值
    - m.erase(k)//key
    - m.erase(p)//point
    - m.erase(b,e)
    ~~~
    ~~~
    map<string,float> price;
    price["apple"] = 0.75;
    ~~~

    **iterate**
    ~~~
    list<int> L;
    list<int>::iterator li;
    li = L.begin();
    /**
    L.erase(li);
    ++li;; **/      //WRONG
    li = L.erase(li);   //RIGHT
    ~~~

    ## initialization vs.assignment
    - 初始化列表

    ## function overload

    **默认参数**
    - 从右向左放置，中间不空
    - 多文件时，在声明的时候默认

    ## friends
    - 友元类：可以访问成员变量的非成员函数

    ## inline functions(内连函数)
    - put inline function's bodies in headerfile(包括类中的inline function)
    - definition inline functions are just decarations
    - 类中直接定义函数相当于 inline functions

    ## const
    ~~~
    char * const q = "abc";//q is const 指针不能再指向其
    他的对象
    const char* p ="ABCD";//(*p)  is a const char 
    限制指针的行为 内存可变(通过其他的指针)
    ~~~
    ~~~
    string p1("Fred");
    const string *p = &p1;//(*p)不可变
    string const*p = &p1;//(*p)不可变
    string* const p = &p1;//p不能改变
    ~~~
    ~~~
    char *s = "Hello";//该字符串为const
    ~~~

    ## const objects
   - const的对象
   - const的成员变量
   - 如果类中的成员函数不会修改成员变量可以在其后面加上关键字const
   - 如果有一个const类型的对象，那么const的类型的成员函数可以调用，非const函数的成员函数不能调用
～～～
类中的const函数
void fg() const {
  ...
}
实际上为
void fg(const A*this) const {
  ...
}
～～～
   ## static
   - 在函数中有static类型的对象，重复调用这个函数只会构造一次这个对象 
   - eg:类中的 staic in m_h 会被所有的对象共享，在全局数据区，注意:一定要在对应的.cpp 文件中声明一个对应的全局变量
   - 类中的静态变量
   - 类中的静态函数：只能访问静态变量，使静态变量的访问受限，避免全局变量，没有制造对象时就可以调用，（相当于类的函数） 
   - 静态成员变量可以被所有的对象共享
  ## avoiding name clashes
  ~~~
  namespace old1{
    void f();
    void g();
  }

  namespace old2{
    void f();
    void g();
  }
  eg: old2::f();
      using namespace old2;
      using namespace std;
  ~~~

  ## inheritance(继承)
  - superclass
  - subclasses
  - 拿已有的类定义新的类，继承全部的内容
  - 子类从父类继承得到的函数如果被**overload**那么父类的其他**overload**将不会存在
  ~~~
  类中：
  public
  private
  protected:自身和子类可以访问
  ~~~

  ## polymorphism(多态)
  - up-casting(造型)
    - 把子类的指针或引用赋给父类 
    - 把子类当作父类看待
  - 调用时使用父类的不同子类 
  - 关键字：virtual
    - 子类出现新的不同版本
  - binding
    - 静态
    - 动态
  - 多态变量(* &)
   - 通过 .访问(静态)
          -> 访问 通过被访问内容判断：访问变量和非virtual函数时为静态
  - 有virtual函数的类，第一项是vtable指向virtual函数
  - 类中构造函数调用虚函数，虚函数看起来不起作用；类中其他函数调用虚函数为动态绑定(this->)
  - vptr可以指向vtable中的内容，在类被创建时确定，子类对象向父类对象赋值时不会改变

  - override
    - 父类与子类之间
    - 函数的名称和参数表相同
    - 父类中函数为virtual类
    - 返回类型相同(如果是&或*可以返回父类类型的子类)
  - namehide:父类中有多个overload的函数，子类中有与其同名的，则其他的overload函数在子类中不再存在

  - 禁止制造对象的机制：类中有一个虚函数为纯虚函数 eg： virtual void render() = 0;   抽象类
  - C++支持多继承

  ## copy constructor (拷贝构造)
  - T::T(const T&)
  - 在函数传参数和返回值时可能发生隐式的拷贝构造
  - 如果类中含有指针变量，需要自己重写拷贝构造函数
  - 不写时会有默认的拷贝构造函数   

  ## 运算符重载
  - operator * (...)
  - 单目运算符作为成员，双目运算符作为非成员(利用友元访问其中的内容)
  ~~~
  const Integer& Integer :: operator++(){
    *this+=1;
    return *this;
  }

  const Integer& Integer :: operator ++(int){
    Integer old (*this);
    ++(*this);
    return old;
  }
  ~~~

  ~~~
  bool Integer :: operator >(const Integer& rhs){
    return i>rhs.i;
  }
  ~~~
  - []的运算符重载，返回引用(&)便于做左值+
  ~~~
  T& operator = (const T&that){
    if(*this!=&that){
      do
    } //避免两者指向同一区域造成的错误
    else return *this;
  }
  ~~~
  ~~~
  类型转换函数
  X::operator T()//T为要转化的类型
  ~~~

  - && 右值引用
  - std::move()//将任何类型的值转为右值并赋值过去
    - 优点：减少大量的复制

  ## templates(模板)
  - 泛型
  ```C++
  template <class T>
  可以用T来带指任意的类型
  void swap(T& a,T& b);
  ```
  - 使用方法
  ```C++
  template < class T >
  T foo(int i) {/* ... */}
  foo<int>(i);
  foo<double>(i); //对T的类型进行制定 
  ```
  - 类模版的类声明
  ```C++
  template < class T >
  class Vector {
    /*...*/
  };

  //函数的定义：
  //类模版中的函数都是函数模版
  template <class T>//important
  T& vector<T> :: operator[](int index){
      return content[index];
  }//important
  ```

  - 模版含有两个参数
  ```C++
  template <class T, int bounds = 100 >
  class FixedVector {
    /* */
  };

  //Usage
  FixedVector<int,50> v1;
  FixedVector<int,5*10> v2;
  FixedVector<int> v3;//使用默认值
  ```



  ## 异常处理
  ~~~
  try{
    ...
    catch(...){

    }
  }
  ~~~
  - 关键字：throw
