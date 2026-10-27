#include "libft.h"
#include <stdio.h>

void delete (void *address)
{
	free(address);
}

void *ff(void *content)
{
	void *c = malloc(sizeof(void*));
	*((int *)c) =  *((int *)content) * 2;
 
	return c;
}

int	main(void)
{
	int a = 5;
	t_list *node = ft_lstnew(&a);
	node->next = (void *)0x1123456789ABCDEF;
	 
	printf("%p\n",    *(long *)(void *)((void *)node+8) );
	printf("%p\n",   node->next );
	// printf("%p\n", node->next );
	
}

// 0x1000
// 0x1001
// 0x1002
// 0x1003
// 0x1000
// 0x1001
// 0x1002
// 0x1003
// 0x1000 
// 0x1001 
// 0x1002 
// 0x1003
// 0x1004 
// 0x1005 
// 0x1006 
// 0x1007 


// 0x 10 00 00 00 40 00 00 00 

// *content = 0x1000000040000000  = 5
// **content = 0x200

// 0x2000  0x00
// 0x2001  0x00
// 0x2002  0x00
// 0x2003  0x00 
// 0x2004  0x40
// 0x2005  0x00
// 0x2006  0x00
// 0x2007  0x10

// 0x2008
// 0x2009
// 0x200A
// 0x200B
// 0x200C
// 0x200D
// 0x200E
// 0x200F
