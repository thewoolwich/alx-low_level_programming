#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void) {
    int fd = open("error.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        return 1;
    }

    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(message) - 1;
    ssize_t bytes_written = write(fd, message, len);
    close(fd);

    if (bytes_written != len) {
        return 1;
    }

    return 0;
}	
