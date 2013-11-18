/* Copyright (c) 2013, Cornell University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of HyperDex nor the names of its contributors may be
 *       used to endorse or promote products derived from this software without
 *       specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/* GENERATED!  Do not modify this file directly */

rb_define_method(class_client, "async_get", hyperdex_ruby_client_get, 2);
rb_define_method(class_client, "get", hyperdex_ruby_client_wait_get, 2);
rb_define_method(class_client, "async_put", hyperdex_ruby_client_put, 3);
rb_define_method(class_client, "put", hyperdex_ruby_client_wait_put, 3);
rb_define_method(class_client, "async_cond_put", hyperdex_ruby_client_cond_put, 4);
rb_define_method(class_client, "cond_put", hyperdex_ruby_client_wait_cond_put, 4);
rb_define_method(class_client, "async_put_if_not_exist", hyperdex_ruby_client_put_if_not_exist, 3);
rb_define_method(class_client, "put_if_not_exist", hyperdex_ruby_client_wait_put_if_not_exist, 3);
rb_define_method(class_client, "async_del", hyperdex_ruby_client_del, 2);
rb_define_method(class_client, "del", hyperdex_ruby_client_wait_del, 2);
rb_define_method(class_client, "async_cond_del", hyperdex_ruby_client_cond_del, 3);
rb_define_method(class_client, "cond_del", hyperdex_ruby_client_wait_cond_del, 3);
rb_define_method(class_client, "async_atomic_add", hyperdex_ruby_client_atomic_add, 3);
rb_define_method(class_client, "atomic_add", hyperdex_ruby_client_wait_atomic_add, 3);
rb_define_method(class_client, "async_cond_atomic_add", hyperdex_ruby_client_cond_atomic_add, 4);
rb_define_method(class_client, "cond_atomic_add", hyperdex_ruby_client_wait_cond_atomic_add, 4);
rb_define_method(class_client, "async_atomic_sub", hyperdex_ruby_client_atomic_sub, 3);
rb_define_method(class_client, "atomic_sub", hyperdex_ruby_client_wait_atomic_sub, 3);
rb_define_method(class_client, "async_cond_atomic_sub", hyperdex_ruby_client_cond_atomic_sub, 4);
rb_define_method(class_client, "cond_atomic_sub", hyperdex_ruby_client_wait_cond_atomic_sub, 4);
rb_define_method(class_client, "async_atomic_mul", hyperdex_ruby_client_atomic_mul, 3);
rb_define_method(class_client, "atomic_mul", hyperdex_ruby_client_wait_atomic_mul, 3);
rb_define_method(class_client, "async_cond_atomic_mul", hyperdex_ruby_client_cond_atomic_mul, 4);
rb_define_method(class_client, "cond_atomic_mul", hyperdex_ruby_client_wait_cond_atomic_mul, 4);
rb_define_method(class_client, "async_atomic_div", hyperdex_ruby_client_atomic_div, 3);
rb_define_method(class_client, "atomic_div", hyperdex_ruby_client_wait_atomic_div, 3);
rb_define_method(class_client, "async_cond_atomic_div", hyperdex_ruby_client_cond_atomic_div, 4);
rb_define_method(class_client, "cond_atomic_div", hyperdex_ruby_client_wait_cond_atomic_div, 4);
rb_define_method(class_client, "async_atomic_mod", hyperdex_ruby_client_atomic_mod, 3);
rb_define_method(class_client, "atomic_mod", hyperdex_ruby_client_wait_atomic_mod, 3);
rb_define_method(class_client, "async_cond_atomic_mod", hyperdex_ruby_client_cond_atomic_mod, 4);
rb_define_method(class_client, "cond_atomic_mod", hyperdex_ruby_client_wait_cond_atomic_mod, 4);
rb_define_method(class_client, "async_atomic_and", hyperdex_ruby_client_atomic_and, 3);
rb_define_method(class_client, "atomic_and", hyperdex_ruby_client_wait_atomic_and, 3);
rb_define_method(class_client, "async_cond_atomic_and", hyperdex_ruby_client_cond_atomic_and, 4);
rb_define_method(class_client, "cond_atomic_and", hyperdex_ruby_client_wait_cond_atomic_and, 4);
rb_define_method(class_client, "async_atomic_or", hyperdex_ruby_client_atomic_or, 3);
rb_define_method(class_client, "atomic_or", hyperdex_ruby_client_wait_atomic_or, 3);
rb_define_method(class_client, "async_cond_atomic_or", hyperdex_ruby_client_cond_atomic_or, 4);
rb_define_method(class_client, "cond_atomic_or", hyperdex_ruby_client_wait_cond_atomic_or, 4);
rb_define_method(class_client, "async_atomic_xor", hyperdex_ruby_client_atomic_xor, 3);
rb_define_method(class_client, "atomic_xor", hyperdex_ruby_client_wait_atomic_xor, 3);
rb_define_method(class_client, "async_cond_atomic_xor", hyperdex_ruby_client_cond_atomic_xor, 4);
rb_define_method(class_client, "cond_atomic_xor", hyperdex_ruby_client_wait_cond_atomic_xor, 4);
rb_define_method(class_client, "async_string_prepend", hyperdex_ruby_client_string_prepend, 3);
rb_define_method(class_client, "string_prepend", hyperdex_ruby_client_wait_string_prepend, 3);
rb_define_method(class_client, "async_cond_string_prepend", hyperdex_ruby_client_cond_string_prepend, 4);
rb_define_method(class_client, "cond_string_prepend", hyperdex_ruby_client_wait_cond_string_prepend, 4);
rb_define_method(class_client, "async_string_append", hyperdex_ruby_client_string_append, 3);
rb_define_method(class_client, "string_append", hyperdex_ruby_client_wait_string_append, 3);
rb_define_method(class_client, "async_cond_string_append", hyperdex_ruby_client_cond_string_append, 4);
rb_define_method(class_client, "cond_string_append", hyperdex_ruby_client_wait_cond_string_append, 4);
rb_define_method(class_client, "async_list_lpush", hyperdex_ruby_client_list_lpush, 3);
rb_define_method(class_client, "list_lpush", hyperdex_ruby_client_wait_list_lpush, 3);
rb_define_method(class_client, "async_cond_list_lpush", hyperdex_ruby_client_cond_list_lpush, 4);
rb_define_method(class_client, "cond_list_lpush", hyperdex_ruby_client_wait_cond_list_lpush, 4);
rb_define_method(class_client, "async_list_rpush", hyperdex_ruby_client_list_rpush, 3);
rb_define_method(class_client, "list_rpush", hyperdex_ruby_client_wait_list_rpush, 3);
rb_define_method(class_client, "async_cond_list_rpush", hyperdex_ruby_client_cond_list_rpush, 4);
rb_define_method(class_client, "cond_list_rpush", hyperdex_ruby_client_wait_cond_list_rpush, 4);
rb_define_method(class_client, "async_set_add", hyperdex_ruby_client_set_add, 3);
rb_define_method(class_client, "set_add", hyperdex_ruby_client_wait_set_add, 3);
rb_define_method(class_client, "async_cond_set_add", hyperdex_ruby_client_cond_set_add, 4);
rb_define_method(class_client, "cond_set_add", hyperdex_ruby_client_wait_cond_set_add, 4);
rb_define_method(class_client, "async_set_remove", hyperdex_ruby_client_set_remove, 3);
rb_define_method(class_client, "set_remove", hyperdex_ruby_client_wait_set_remove, 3);
rb_define_method(class_client, "async_cond_set_remove", hyperdex_ruby_client_cond_set_remove, 4);
rb_define_method(class_client, "cond_set_remove", hyperdex_ruby_client_wait_cond_set_remove, 4);
rb_define_method(class_client, "async_set_intersect", hyperdex_ruby_client_set_intersect, 3);
rb_define_method(class_client, "set_intersect", hyperdex_ruby_client_wait_set_intersect, 3);
rb_define_method(class_client, "async_cond_set_intersect", hyperdex_ruby_client_cond_set_intersect, 4);
rb_define_method(class_client, "cond_set_intersect", hyperdex_ruby_client_wait_cond_set_intersect, 4);
rb_define_method(class_client, "async_set_union", hyperdex_ruby_client_set_union, 3);
rb_define_method(class_client, "set_union", hyperdex_ruby_client_wait_set_union, 3);
rb_define_method(class_client, "async_cond_set_union", hyperdex_ruby_client_cond_set_union, 4);
rb_define_method(class_client, "cond_set_union", hyperdex_ruby_client_wait_cond_set_union, 4);
rb_define_method(class_client, "async_map_add", hyperdex_ruby_client_map_add, 3);
rb_define_method(class_client, "map_add", hyperdex_ruby_client_wait_map_add, 3);
rb_define_method(class_client, "async_cond_map_add", hyperdex_ruby_client_cond_map_add, 4);
rb_define_method(class_client, "cond_map_add", hyperdex_ruby_client_wait_cond_map_add, 4);
rb_define_method(class_client, "async_map_remove", hyperdex_ruby_client_map_remove, 3);
rb_define_method(class_client, "map_remove", hyperdex_ruby_client_wait_map_remove, 3);
rb_define_method(class_client, "async_cond_map_remove", hyperdex_ruby_client_cond_map_remove, 4);
rb_define_method(class_client, "cond_map_remove", hyperdex_ruby_client_wait_cond_map_remove, 4);
rb_define_method(class_client, "async_map_atomic_add", hyperdex_ruby_client_map_atomic_add, 3);
rb_define_method(class_client, "map_atomic_add", hyperdex_ruby_client_wait_map_atomic_add, 3);
rb_define_method(class_client, "async_cond_map_atomic_add", hyperdex_ruby_client_cond_map_atomic_add, 4);
rb_define_method(class_client, "cond_map_atomic_add", hyperdex_ruby_client_wait_cond_map_atomic_add, 4);
rb_define_method(class_client, "async_map_atomic_sub", hyperdex_ruby_client_map_atomic_sub, 3);
rb_define_method(class_client, "map_atomic_sub", hyperdex_ruby_client_wait_map_atomic_sub, 3);
rb_define_method(class_client, "async_cond_map_atomic_sub", hyperdex_ruby_client_cond_map_atomic_sub, 4);
rb_define_method(class_client, "cond_map_atomic_sub", hyperdex_ruby_client_wait_cond_map_atomic_sub, 4);
rb_define_method(class_client, "async_map_atomic_mul", hyperdex_ruby_client_map_atomic_mul, 3);
rb_define_method(class_client, "map_atomic_mul", hyperdex_ruby_client_wait_map_atomic_mul, 3);
rb_define_method(class_client, "async_cond_map_atomic_mul", hyperdex_ruby_client_cond_map_atomic_mul, 4);
rb_define_method(class_client, "cond_map_atomic_mul", hyperdex_ruby_client_wait_cond_map_atomic_mul, 4);
rb_define_method(class_client, "async_map_atomic_div", hyperdex_ruby_client_map_atomic_div, 3);
rb_define_method(class_client, "map_atomic_div", hyperdex_ruby_client_wait_map_atomic_div, 3);
rb_define_method(class_client, "async_cond_map_atomic_div", hyperdex_ruby_client_cond_map_atomic_div, 4);
rb_define_method(class_client, "cond_map_atomic_div", hyperdex_ruby_client_wait_cond_map_atomic_div, 4);
rb_define_method(class_client, "async_map_atomic_mod", hyperdex_ruby_client_map_atomic_mod, 3);
rb_define_method(class_client, "map_atomic_mod", hyperdex_ruby_client_wait_map_atomic_mod, 3);
rb_define_method(class_client, "async_cond_map_atomic_mod", hyperdex_ruby_client_cond_map_atomic_mod, 4);
rb_define_method(class_client, "cond_map_atomic_mod", hyperdex_ruby_client_wait_cond_map_atomic_mod, 4);
rb_define_method(class_client, "async_map_atomic_and", hyperdex_ruby_client_map_atomic_and, 3);
rb_define_method(class_client, "map_atomic_and", hyperdex_ruby_client_wait_map_atomic_and, 3);
rb_define_method(class_client, "async_cond_map_atomic_and", hyperdex_ruby_client_cond_map_atomic_and, 4);
rb_define_method(class_client, "cond_map_atomic_and", hyperdex_ruby_client_wait_cond_map_atomic_and, 4);
rb_define_method(class_client, "async_map_atomic_or", hyperdex_ruby_client_map_atomic_or, 3);
rb_define_method(class_client, "map_atomic_or", hyperdex_ruby_client_wait_map_atomic_or, 3);
rb_define_method(class_client, "async_cond_map_atomic_or", hyperdex_ruby_client_cond_map_atomic_or, 4);
rb_define_method(class_client, "cond_map_atomic_or", hyperdex_ruby_client_wait_cond_map_atomic_or, 4);
rb_define_method(class_client, "async_map_atomic_xor", hyperdex_ruby_client_map_atomic_xor, 3);
rb_define_method(class_client, "map_atomic_xor", hyperdex_ruby_client_wait_map_atomic_xor, 3);
rb_define_method(class_client, "async_cond_map_atomic_xor", hyperdex_ruby_client_cond_map_atomic_xor, 4);
rb_define_method(class_client, "cond_map_atomic_xor", hyperdex_ruby_client_wait_cond_map_atomic_xor, 4);
rb_define_method(class_client, "async_map_string_prepend", hyperdex_ruby_client_map_string_prepend, 3);
rb_define_method(class_client, "map_string_prepend", hyperdex_ruby_client_wait_map_string_prepend, 3);
rb_define_method(class_client, "async_cond_map_string_prepend", hyperdex_ruby_client_cond_map_string_prepend, 4);
rb_define_method(class_client, "cond_map_string_prepend", hyperdex_ruby_client_wait_cond_map_string_prepend, 4);
rb_define_method(class_client, "async_map_string_append", hyperdex_ruby_client_map_string_append, 3);
rb_define_method(class_client, "map_string_append", hyperdex_ruby_client_wait_map_string_append, 3);
rb_define_method(class_client, "async_cond_map_string_append", hyperdex_ruby_client_cond_map_string_append, 4);
rb_define_method(class_client, "cond_map_string_append", hyperdex_ruby_client_wait_cond_map_string_append, 4);
rb_define_method(class_client, "search", hyperdex_ruby_client_search, 2);
rb_define_method(class_client, "async_search_describe", hyperdex_ruby_client_search_describe, 2);
rb_define_method(class_client, "search_describe", hyperdex_ruby_client_wait_search_describe, 2);
rb_define_method(class_client, "sorted_search", hyperdex_ruby_client_sorted_search, 5);
rb_define_method(class_client, "async_group_del", hyperdex_ruby_client_group_del, 2);
rb_define_method(class_client, "group_del", hyperdex_ruby_client_wait_group_del, 2);
rb_define_method(class_client, "async_count", hyperdex_ruby_client_count, 2);
rb_define_method(class_client, "count", hyperdex_ruby_client_wait_count, 2);
