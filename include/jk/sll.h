/*
 * sll.h -- singly-linked list
 * Copyright (C) 2021  Jacob Koziej <jacobkoziej@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef LIBJK_SLL_H_
#define LIBJK_SLL_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>


typedef struct jk_sll_node_s {
	void *data;
	struct jk_sll_node_s *next;
} jk_sll_node_t;

typedef struct jk_sll_s {
	jk_sll_node_t *head;
	jk_sll_node_t *tail;
	size_t nodes;
} jk_sll_t;


size_t    jk_sll_append(jk_sll_t *restrict sll, void *data);
void      jk_sll_clear(jk_sll_t *restrict sll, void (*free_data) (void *ptr));
void     *jk_sll_del(jk_sll_t *restrict sll, size_t n);
void      jk_sll_free(jk_sll_t *restrict sll, void (*free_data) (void *ptr));
void     *jk_sll_get(const jk_sll_t *restrict sll, size_t n);
jk_sll_t *jk_sll_init(void);
size_t    jk_sll_insert(jk_sll_t *restrict sll, void *data, size_t n);
size_t    jk_sll_prepend(jk_sll_t *restrict sll, void *data);
size_t    jk_sll_size(const jk_sll_t *restrict sll);


#ifdef __cplusplus
}
#endif

#endif /* LIBJK_SLL_H_ */
