#include "widget.h"
#include "ui_widget.h"

#include "../JingTaiClass/JingTaiClass.h"
#include "../GongXiangClass/GongXiangClass.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_JingTaiKu_clicked()
{
/*
    在.pro文件中添加.a文件的路径，以及头文件的路径。
    LIBS    += F:\library\staticLibrary\debug\libstaticLibrary.a   #.a文件的路径
    INCLUDEPATH += F:\library\staticLibrary  #以及头文件的路径。
*/
    JingTaiClass jingTai;
    QString str=jingTai.GetJingTaiClassInfo();
    QMessageBox::information(this,"静态类",str);
}

void Widget::on_pushButton_GongGongKu_clicked()
{
     /*
    动态链接库文件是在运行的时候被应用程序使用。在使用动态链接库的时候，一般需要提供两个文件：
    1.引入库文件（.lib）：引入库文件与静态链接库文件的后缀名相同，但是并不相同。引入库文件主要包含了DLL文件导出的函数和变量的符号名。
    2.DLL（.dll）：包含实际的函数和数据。
    在使用动态链接库的情况下，在编译链接可执行文件时，只需要引入库文件即可，但是在运行可执行程序时，
    则需要加载相应的DLL文件。
    然后配置环境变量，在.pro中添加：
    #引入动态库
    #这是编译期的链接库路径
    LIBS    += C:\QTtest\LeiDiaoYong\build-MainClass-Desktop_Qt_5_5_1_MinGW_32bit-Debug\GongXiangClass\debug\GongXiangClass.dll
    INCLUDEPATH += C:\QTtest\LeiDiaoYong\MainClass\GongXiangClass
 */
    GongXiangClass dongTai;
    QString str=dongTai.GetGongXiangClassInfo();
    QMessageBox::information(this,"动态类",str);
    /*
    在运行的时候，你可能得不到任何的结果。这是因为，虽然我们在LIBS中添加了dll文件的路径，
    但是这里的添加路径编译器时的查找路径，在运行时并不是从这里查找，而是先从当前项目目录中先找，
    然后从系统变量path的路径中去找。因此，有两种方法可以解决这个问题，将dll文件拷贝到当前目录中，
    或者在系统变量path中添加dll的路径，然后重启电脑。
    前面说到，动态链接库包括两个文件，引入库文件和DLL文件，为什么这里只需要将DLL文件拷贝到当前目录下呢？
    这是因为引入库文件中包含的是DLL文件的函数和变量的符号名，用来供给应用程序的编译通过，
    而在.pro文件中配置LIBS的路径即为编译阶段的查找路径，
    因此这里的引入库文件就不需要拷贝即可在编译阶段被编译器查找得到。
    */
}


