# Review_C_CPP

C & CPP in VSCode

# vscode c/c++ 编译环境配置教程

# [参考教程]https://blog.csdn.net/qq_43041976/article/details/100542557

1. 下载安装
   下载 MinGW-W64 GCC-8.1.0 编译器
   MinGW-W64 GCC 下载地址：https://sourceforge.net/projects/mingw-w64/files/Toolchains targetting Win32/Personal Builds/mingw-builds/installer/mingw-w64-install.exe
   离线下载地址：https://sourceforge.net/projects/mingw-w64/files/mingw-w64/mingw-w64-release/
   安装选项 x86_64-win32-seh

settings (specify setup settings.)
Version 8.1.0
Architecture x86_64
Threads win32
Exception seh
Build revision 0

2. 环境配置
   mingw-w64 安装目录/??/??/bin 路径加入系统环境变量 path 中（建议重启）

3. VSCode
4. C/C++ 插件（重启 vscode）
   （vscode 设置中文环境教程http://www.chuancn.cn/post/将VSCode设置成中文语言环境）

5. 配置 c++的.vscode 文件
   选定项目文件夹，Ctrl+shift+p，输入 tasks（任务：配置任务运行程序 Tasks:Configure Task Runner）,Others(运行任意外部命令的示例)
   生成.vscode 文件夹
   在其中创建以下文件
   _c_cpp_properties.json_
   "includepath"设置问题 路径获取获取方法为：cmd C:\Windows\System32> (gcc -v -E -x c++)
   Program Files (x86) ->
   Program Files\mingw-w64\x86*64-8.1.0-win32-seh-rt_v6-rev0
   \_launch.json*
   _settings.json_
   _tasks.json_

c_cpp_properties.json 如果第一种出错请使用第二种
第一种
{
"configurations": [
{
"name": "Win32",
"includePath": [
"${workspaceRoot}",
"C:/Program Files (x86)/mingw64/include/**",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/x86_64-w64-mingw32",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/backward",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include-fixed",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/../../../../x86_64-w64-mingw32/include"
],
"defines": [
"_DEBUG",
"UNICODE",
"__GNUC__=6",
"__cdecl=__attribute__((__cdecl__))"
],
"intelliSenseMode": "msvc-x64",
"browse": {
"limitSymbolsToIncludedHeaders": true,
"databaseFilename": "",
"path": [
"${workspaceRoot}",
"C:/Program Files (x86)/mingw64/include/**",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/x86_64-w64-mingw32",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/backward",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include-fixed",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/../../../../x86_64-w64-mingw32/include"
]
}
}
],
"version": 4
}
第二种
{
"configurations": [
{
"name": "Win32",
"includePath": [
"C:/Program Files (x86)/mingw64/include/**",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/x86_64-w64-mingw32",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/backward",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/include-fixed",
"C:/Program Files (x86)/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/../../../../x86_64-w64-mingw32/include"
],
"browse": {
"limitSymbolsToIncludedHeaders": true,
"databaseFilename": ""
}
}
],
"version": 4
}

6.配置 c 语言的.vscode 文件
.vscode 文件夹
在其中创建以下文件
_launch.json_
_settings.json_
_tasks.json_
