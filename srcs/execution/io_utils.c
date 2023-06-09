
#include <fcntl.h>
#include "execution.h"

void	xclose(int fd)
{
	if (close(fd) < 0)
		exit(EXIT_FAILURE);
}

void	xdup2(int old_fd, int new_fd)
{
	if (old_fd != new_fd)
	{
		if (dup2(old_fd, new_fd) < 0)
		{
			xclose(old_fd);
			exit(EXIT_FAILURE);
		}
	}
}

int	xdup(int old_fd)
{
	int	new_fd;

	new_fd = dup(old_fd);
	if (new_fd < 0)
		exit(EXIT_FAILURE);
	return (new_fd);
}

void	xpipe(int fds[2])
{
	if (pipe(fds) < 0)
		exit(EXIT_FAILURE);
}

void	dup_and_close(int old_fd, int new_fd)
{
	xdup2(old_fd, new_fd);
	xclose(old_fd);
}
