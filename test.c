#include "libft.h"
#include <stdio.h>

unsigned long	assss(void)
{
	int				x;
	unsigned long	addr;

	x = 1;
	addr = (unsigned long)&x;
	printf("%p\n", &x);
	return (addr);
}

int	*bbbbb(void)
{
	int	x;

	printf("%p\n", &x);
	return (&x);
}

int	main(void)
{
	// unsigned long *ptr = (unsigned long *)assss();
	//  printf("%d\n" , *ptr );
	printf("%p", bbbbb());
}

// 444

// 188 1

// l

// 254 0 0 0

// 0x1000
// 0x1001
// 0x1002
// 0x1003
// 0x1004
// 0x1005
// 0x1006
// 0x1007

// 0x2000
// 0x2001
// 0x2002
// 0x2003
// 0x2004
// 0x2005
// 0x2006
// 0x2007
// 0x2008
// 0x2009
// 0x200A
// 0x200B
// 0x200C
// 0x200D
// 0x200E
// 0x200F
