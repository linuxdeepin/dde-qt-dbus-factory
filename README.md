# dde-qt-dbus-factory
`dde-qt-dbus-factory` 是用来统一存放 `dde` 使用到的自动生成的 `Qt DBus` 代码的仓库，这样 `dde` 开发者就不用在自己的项目中重复创建同样的 `DBus` 代码，或者中其他项目中拷贝文件到自己的项目里面。

生成代码的时候请使用qdbusxml2cpp-fix这个工具而不是Qt官方提供的qdbusxml2cpp，这个工具的源码包含在本项目的tools目录下，之后也会提供相关包直接安装。

具体生成的规则如下：

* 生成代码用的xml文件要存放到项目的xml目录下，这样以后需要更新接口的时候，代码审核可以清晰看到接口的变动；
* 文件名统一为相应DBus Interface的全小写并用“_”替换“.”；
* 类名统一为DBus Interface的最后一个单词，使用过程中使用命名空间引用（或者自己起别名）；

举个简单的例子：
比如我需要生成org.freedesktop.Notifications的DBus代码，那么先要生成org.freedesktop.Notifications.xml文件，把接口相应的描述信息写入丢到xml目录下；然后使用命令：
``` BASH
qdbusxml2cpp -c Notifications -p org_freedesktop_notifications xml/org.freedesktop.Notifications.xml
```
生成相应的代码即可。

注：生成过程中遇到的复杂类型需要自定义类型的，统一放在相应的生成文件内以自包容；
