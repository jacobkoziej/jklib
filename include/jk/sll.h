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


typedef struct jk_sll_s jk_sll_t;


size_t    jk_sll_append(jk_sll_t *sll, void *data);
void      jk_sll_free(jk_sll_t *sll, void (*free_data) (void *ptr));
jk_sll_t *jk_sll_init(void);
void     *jk_sll_n(jk_sll_t *sll, size_t n);
size_t    jk_sll_prepend(jk_sll_t *sll, void *data);


#ifdef __cplusplus
}
#endif

#endif /* LIBJK_SLL_H_ */
