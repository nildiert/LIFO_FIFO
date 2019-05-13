#ifndef LIFO_FIFO_H
#define LIFO_FIFO_H

/**
* struct process_s - Process
* @id: id
* @prev: points to the previous node
* @next: points to the next node
*
* Description: Queue
* for Holberton project
*/

typedef struct process_s
{
	int id;
	struct process_t *prev;
	struct process_t *next;
} process_t;

#endif /* LIFO_FIFO_H */
