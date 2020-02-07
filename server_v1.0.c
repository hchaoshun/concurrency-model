pid_t pid
int listenfd, connfd;

listenfd = Socket(...);
Bind(listenfd, ...);
Listen(listenfd, LISTENNQ);

for (; ;) {
    connfd = accept(listenfd, ...);
    if ((pid = Fork()) == 0) {
        Close(listenfd);
        doit(connfd);
        Close(connfd);
        exit(0);
    }
    Close(connfd);
}
