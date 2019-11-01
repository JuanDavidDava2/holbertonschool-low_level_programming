#include"lists.h"
/**
 * print_list - print list
 * @h: have a list in list_t
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int leng;
	char *sstr;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		leng = h->len;
		sstr = h->str;
		if (sstr == NULL)
		{
			leng = 0;
			sstr = "(nil)";
		}
		printf("[%d] %s\n", leng, sstr);
		h = h->next;
		count++;
	}
	return (count);
}
