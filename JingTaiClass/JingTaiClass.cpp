//然后构建项目之后，会在目录的debug下生成一个后缀名为.a的文件
//这个文件即为静态链接库文件了。接下来使用这个静态链接库文件。

#include "JingTaiClass.h"


JingTaiClass::JingTaiClass()
{
}

QString JingTaiClass::GetJingTaiClassInfo()
{
    return "JingTaiClass Good";
}

