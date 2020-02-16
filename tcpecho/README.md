# 性能测试报告

测量环境是从一个Solaris客户机向RTT为175ms的一个服务器主机复制2000行文本。

以下是调用这些版本的TCP客户程序执行时钟时间的汇总

- 停等版本(stopandwait.c)                    :   354.0s
- select加阻塞式I/O版本(selectblock.c)        :   12.3s
- 非阻塞式I/O版本(selectnoblock.c)            :   6.9s
- fork版本(fork.c)                           :   8.7s
- 线程化版本(thread.c)                        :   8.5s 