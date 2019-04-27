# 依赖
使用的版本为Easylogging++ v9.96.7。其源码库地址为[https://github.com/zuhd-org/easyloggingpp](https://github.com/zuhd-org/easyloggingpp "https://github.com/zuhd-org/easyloggingpp")
# 本库作用
本库在Easylogging++基础上实现了在不同静态库中共享同一个logger，该功能是Easylogging++本身就有的，这里只是将其封装成了一个libshareLog.a，这样有利于其他项目使用