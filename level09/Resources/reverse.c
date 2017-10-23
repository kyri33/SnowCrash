#include <unistd.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>

int main() {
        int fd = open("/home/user/level09/token", O_RDONLY);
        char buff[1024];
        int len = read(fd, buff, 1024);
        int i = 0;
        while (i <= len) {
                char c = buff[i] - i;
                write(1, &c, 1);
                i++;
        }
        write(1, "\n", 1);
}
