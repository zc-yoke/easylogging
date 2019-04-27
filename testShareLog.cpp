#include <iostream>
#include "student.h"
#include "shareLog.h"
#include "teacher.h"
INITIALIZE_EASYLOGGINGPP
//设置不要产生缺省日志文件
#define ELPP_NO_DEFAULT_LOG_FILE
using namespace std;
int main()
{

    el::Helpers::setStorage(getStorage());

    //新建一个日志配置
    el::Configurations defaultConf("logSetting.conf");
    el::Loggers::setDefaultConfigurations(defaultConf,true);
    LOG(DEBUG) << "DEBUG LOG FROM main()";
    VLOG(0) << "VERBOSE LOG FROM main()";
    student lily("lily",165);
    lily.introduce();
    teacher teacherZhang("zhangLaoShi",168);
    teacherZhang.introduce();
    char pause[2];
    cin>>pause;
    return 0;
}
