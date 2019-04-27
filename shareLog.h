#ifndef SHARELOG_H_INCLUDED
#define SHARELOG_H_INCLUDED
#include "easylogging++.h"
/*这是一个基本函数，让所有其他静态或动态库包含本函数的头文件可以实现，
在静态或动态库中，使用easylogging++，并在引用该静态库或动态库的主函数中配置日志*/

el::base::type::StoragePointer getStorage();
#endif // SHARELOG_H_INCLUDED
